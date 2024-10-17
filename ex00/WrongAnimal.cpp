/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:27:48 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 23:37:49 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream> // cout, endl

#define UNUSED __attribute__ ((unused))

#define COLOR "\x1B[1;35m"
#define FAINT "\x1B[2;35m"
#define RESET "\x1B[0m"


// Constants

const std::string	WrongAnimal::type = "(wrong)";


// Canonical Four

WrongAnimal::WrongAnimal	(void) {
	std::cout << FAINT "An wrong animal appears..."			RESET << std::endl;
}
WrongAnimal::WrongAnimal	(UNUSED const WrongAnimal & a) {
	std::cout << FAINT "An wrong animal copy appears..."	RESET << std::endl;
}
WrongAnimal					& WrongAnimal::operator =
(UNUSED const WrongAnimal & a) {
	std::cout << FAINT "An wrong animal copies another."	RESET << std::endl;
	return *this;
}
WrongAnimal::~ WrongAnimal	(void) {
	std::cout << FAINT "An wrong animal disappears."		RESET << std::endl;
}


// Statics

const std::string	& WrongAnimal::getType(void) { return type; }

void	WrongAnimal::makeSound(void)
{ std::cout << COLOR "An wrong animal bellows someway.\n" RESET; }
