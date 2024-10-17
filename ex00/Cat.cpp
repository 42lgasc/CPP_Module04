/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:27:23 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 23:37:10 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream> // cout, endl

#define COLOR "\x1B[1;33m"
#define FAINT "\x1B[2;33m"
#define RESET "\x1B[0m"


// Constants

const std::string	Cat::type = "Cat";


// Canonical Four

Cat::Cat	(void)			: Animal ()
{	std::cout << FAINT "\\ A cat it be..."				RESET << std::endl; }
Cat::Cat	(const Cat & c)	: Animal (c)
{	std::cout << FAINT "\\ A cat copy it be..."			RESET << std::endl; }
Cat			& Cat::operator = (const Cat & c) {
	std::cout << FAINT "/ The copying of a cat:"		RESET << std::endl;
	Animal::operator = (c);
	return *this;
}
Cat::~ Cat	(void)
{	std::cout << FAINT "/ The disappearance of a cat:"	RESET << std::endl; }


// Methods

const std::string	& Cat::getType(void) const { return type; }

void	Cat::makeSound(void) const
{ std::cout << COLOR "A cat meows.\n" RESET; }
