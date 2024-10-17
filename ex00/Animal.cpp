/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:26:34 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 23:38:26 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream> // cout, endl

#define UNUSED __attribute__ ((unused))

#define COLOR "\x1B[1;32m"
#define FAINT "\x1B[2;32m"
#define RESET "\x1B[0m"


// Constants

const std::string	Animal::type = "(unspecific)";


// Canonical Four

Animal::Animal		(void)
{	std::cout << FAINT "An animal appears..."		RESET << std::endl; }
Animal::Animal		(UNUSED const Animal & a)
{	std::cout << FAINT "An animal copy appears..."	RESET << std::endl; }
Animal				& Animal::operator = (UNUSED const Animal & a) {
	std::cout << FAINT "An animal copies another."	RESET << std::endl;
	return *this;
}
Animal::~ Animal	(void)
{	std::cout << FAINT "An animal disappears."		RESET << std::endl; }


// Methods

const std::string	& Animal::getType(void) const { return type; }

void	Animal::makeSound(void) const
{ std::cout << COLOR "An animal bellows someway.\n" RESET; }
