/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:21:42 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/06 00:20:55 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream> // cout


// Constants

const std::string	& Cure::c_type = "cure";


// Canonical Four

Cure::Cure		(void)											{}
Cure::Cure		(const Cure & original): AMateria (original)	{}
Cure			& Cure::operator = (const Cure & other)
{ AMateria::operator = (other); return *this; }
Cure::~ Cure	(void)											{}


// Methods

const Cure	*Cure::clone(void) const { return new const Cure (*this); }
void		Cure::use(const ICharacter & target) const
{ std::cout << "* heals " << target.getName() << "'s wounds *\n"; }


// Utilities

const std::string	& Cure::ft_virtual_type(void) const { return c_type; }
