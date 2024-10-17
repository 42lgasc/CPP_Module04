/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:28:29 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 23:12:18 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream> // cout, endl

#define COLOR "\x1B[1;31m"
#define FAINT "\x1B[2;31m"
#define RESET "\x1B[0m"


// Canonical Four

WrongCat::WrongCat		(void) : WrongAnimal () {
	std::cout << FAINT "\\ A wrong cat it be..."				RESET
		<< std::endl;
}
WrongCat::WrongCat		(const WrongCat & c) : WrongAnimal (c) {
	std::cout << FAINT "\\ A wrong cat copy it be..."			RESET
		<< std::endl;
}
WrongCat				& WrongCat::operator = (const WrongCat & c) {
	std::cout << FAINT "/ The copying of a wrong cat:"			RESET
		<< std::endl;
	WrongAnimal::operator = (c);
	return *this;
}
WrongCat::~ WrongCat	(void) {
	std::cout << FAINT "/ The disappearance of a wrong cat:"	RESET
		<< std::endl;
}
