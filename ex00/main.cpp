/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:52:13 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 21:54:35 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

#include <iostream> // cout, endl

int	main(void) {
	{
		const Animal *const	meta = new Animal();
		const Animal *const	d = new Dog();
		const Animal *const	c = new Cat();

		std::cout << d->getType() << " " << std::endl;
		std::cout << c->getType() << " " << std::endl;
		// will output the cat sound!
		c->makeSound();
		d->makeSound();
		meta->makeSound();

		delete meta, delete d, delete c;
	}
	{
		const WrongAnimal *const	wrong = new WrongAnimal();
		const WrongAnimal *const	wd = new WrongDog();
		const WrongAnimal *const	wc = new WrongCat();

		std::cout << wd->getType() << " " << std::endl;
		std::cout << wc->getType() << " " << std::endl;
		// will output the wrong animal sound!
		wc->makeSound();
		wd->makeSound();
		wrong->makeSound();

		delete wrong;
		delete static_cast <const WrongDog *> (wd);
		delete static_cast <const WrongCat *> (wc);
	}
}
