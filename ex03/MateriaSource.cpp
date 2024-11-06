/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:13:51 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/06 00:21:08 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

// Canonical Four

MateriaSource::MateriaSource	(void): IMateriaSource () { ft_forget(); }
MateriaSource::MateriaSource	(const MateriaSource & original)
: IMateriaSource (original) { ft_forget(); ft_set_memory(original.materia); }
MateriaSource					& MateriaSource::operator =
(const MateriaSource & other) {
	if (& other == this) return *this;
	IMateriaSource::operator = (other);
	ft_set_memory(other.materia);
	return *this;
}
MateriaSource::~ MateriaSource	(void) {
	for (size_t i = 0; i < c_slots; ++ i)
		if (materia [i] != NULL) delete materia [i];
}


// Methods

void	MateriaSource::learnMateria(const AMateria *const m) {
	// As the subject wants us to copy the Materia,
	// the example code would leak without these deletion.
	// I am assuming here the example code should not leak.
	for (size_t i = 0; i < c_slots; ++ i)
		if (materia [i] == NULL) { materia [i] = m->clone(); return delete m; }
	delete m;
}
const AMateria	*MateriaSource::createMateria(const std::string & type) const {
	for (size_t i = 0; i < c_slots; ++ i)
		if (materia [i] != NULL && materia [i]->getType() == type)
			return materia [i]->clone();
	return NULL;
}


// Utilities

void	MateriaSource::ft_forget(void)
{ for (size_t i = 0; i < c_slots; ++ i) materia [i] = NULL; }
void	MateriaSource::ft_set_memory(const AMateria *const (& memory) [c_slots])
{
	for (size_t i = 0; i < c_slots; ++ i) {
		if		(materia	[i] != NULL) delete materia [i];
		if		(memory		[i] != NULL) materia [i] = memory [i]->clone();
		else if	(materia	[i] != NULL) materia [i] = NULL;
	}
}
