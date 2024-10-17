/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:28:08 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 23:12:08 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

#include <iostream> // cout, endl

#define COLOR "\x1B[1;36m"
#define FAINT "\x1B[2;36m"
#define RESET "\x1B[0m"


// Canonical Four

WrongDog::WrongDog		(void) : WrongAnimal () {
	std::cout << FAINT "\\ A wrong dog it be..."				RESET
		<< std::endl;
}
WrongDog::WrongDog		(const WrongDog & c) : WrongAnimal (c) {
	std::cout << FAINT "\\ A wrong dog copy it be..."			RESET
		<< std::endl;
}
WrongDog				& WrongDog::operator = (const WrongDog & c) {
	std::cout << FAINT "/ The copying of a wrong dog:"			RESET
		<< std::endl;
	WrongAnimal::operator = (c);
	return *this;
}
WrongDog::~ WrongDog	(void) {
	std::cout << FAINT "/ The disappearance of a wrong dog:"	RESET
		<< std::endl;
}
