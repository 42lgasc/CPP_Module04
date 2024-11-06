/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:12:54 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/06 00:17:41 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream> // cout


// Constants

const std::string	& Ice::c_type = "ice";


// Canonical Four

Ice::Ice	(void)										{}
Ice::Ice	(const Ice & original): AMateria (original)	{}
Ice			& Ice::operator = (const Ice & other)
{ AMateria::operator = (other); return *this; }
Ice::~ Ice	(void)										{}


// Methods

const Ice	*Ice::clone(void) const { return new const Ice (*this); }
void		Ice::use(const ICharacter & target) const
{ std::cout << "* shoots an ice bolt at " << target.getName() << " *\n"; }


// Utilities

const std::string	& Ice::ft_virtual_type(void) const { return c_type; }
