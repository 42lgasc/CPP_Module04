/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:27:02 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/18 16:59:10 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream> // cout, endl

#define COLOR "\x1B[1;94m"
#define FAINT "\x1B[2;94m"
#define RESET "\x1B[0m"


// Constants

const std::string	Dog::type = "Dog";


// Canonical Four

Dog::Dog	(void)			: Animal (	), brain (new Brain)
{	std::cout << FAINT "\\ A dog it be..."				RESET << std::endl; }
Dog::Dog	(const Dog & d)	: Animal (d	), brain (new Brain (*d.brain))
{	std::cout << FAINT "\\ A dog copy it be..."			RESET << std::endl; }
Dog			& Dog::operator = (const Dog & d) {
	std::cout << FAINT "/ The copying of a dog:"		RESET << std::endl;
	Animal::operator = (d);
	delete brain;
	brain = new Brain (*d.brain);
	return *this;
}
Dog::~ Dog	(void) {
	std::cout << FAINT "/ The disappearance of a dog:"	RESET << std::endl;
	delete brain;
}


// Methods

const std::string	& Dog::getType(void) const { return type; }

void	Dog::makeSound(void) const
{ std::cout << COLOR "A dog barks.\n" RESET; }
