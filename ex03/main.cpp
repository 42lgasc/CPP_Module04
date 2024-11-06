/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:30:41 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/06 13:44:01 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

#include <iostream> // cout

class AMateria;
class ICharacter;
class IMateriaSource;

int	main(void) {
	{
		IMateriaSource *const	src = new MateriaSource;
		src->learnMateria(new const Ice);
		src->learnMateria(new const Cure);

		ICharacter *const	me = new Character ("me");

		const AMateria	*tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		const ICharacter *const	bob = new const Character ("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		const Ice		& i = Ice ();
		const Cure		& c = Cure ();
		const AMateria	& meta = i;
		const AMateria	*p;

		//*p = meta;
		//*p = c;
		p = & meta;
		p = & c;
		// I think I know why this be, but I hope to be wrong.
		// AMateria::AMateria (const std::string & type)
		std::cout << "\nMeta Materia is " << p->getType() << '\n';
		const Character	& dummy = Character ("a dummy");
		p->use(dummy);

		Ice	ii;
		const Ice	*j;
		ii = Ice (i);
		//ii = Ice (c);
		//ii = Ice (meta);
		//ii = Ice (*p);
		j = i.clone(),		delete j;
		//j = c.clone(),		delete j;
		//j = meta.clone(),	delete j;
		//j = p->clone(),		delete j;
		Cure	d;
		const Cure	*h;
		//d = Ice (i);
		d = Cure (c);
		//d = Cure (meta);
		//d = Ice (*p);
		//h = i.clone(),		delete h;
		h = c.clone(),		delete h;
		//h = meta.clone(),	delete h;
		//h = p->clone(),		delete h;
		i.use(dummy);
		c.use(dummy);
		meta.use(dummy);
		p->use(dummy);
	}
	{
		Character				o = Character ("Olga");
		Character				c = Character ("Cecivine");
		const ICharacter		& inter (o);
		const ICharacter		*p;
		const Ice		*const	& ice (new const Ice);
		const AMateria	*const	& meta (ice);

		//*p = c;
		//*p = inter;
		p = & c;
		p = & inter;
		c = Character ("Malboneau");
		for (size_t i = 0; i < 10; ++ i) c.unequip(i);
		c.equip(new const Ice);
		c.equip(new const Cure);
		c.equip(meta);
		//c.equip(ice);
		c.equip(new const Ice);
		c.equip(new const Cure);
		c.unequip(2);
		for (size_t i = 0; i < 10; ++ i) c.use(i, inter);
		//h = new Character (*p);
		//h = Character (inter);
		Character	hh (c);
		Character	*h = & hh;
		std::cout << "\n""Names: " << c.getName() << ", " << inter.getName()
			<< ", " << p->getName() << ", " << h->getName() << '\n';
		h->equip(new const Ice), h->equip(new const Cure),
			h->equip(new const Ice), h->equip(new const Cure);
		for (size_t i = 0; i < 10; ++ i) h->use(i, c);
		for (size_t i = 0; i < 10; ++ i) h->unequip(i);
	}
	{
		MateriaSource			s;
		const IMateriaSource	& inter (s);
		const IMateriaSource	*p;

		//*p = s;
		//*p = inter;
		p = & s;
		p = & inter;
		//s = MateriaSource (*p);
		(void) p;
		s = MateriaSource (s);
		s.learnMateria(new const Ice);
		delete s.createMateria("fire");
		delete s.createMateria("ice");
		delete s.createMateria("cure");
		s.learnMateria(new const Cure);
		delete s.createMateria("cure");
		s = MateriaSource ();
		for (size_t i = 0; i < 10; ++ i) s.learnMateria(new const Ice);
		s.learnMateria(new const Cure);
		delete s.createMateria("ice");
	}
}
