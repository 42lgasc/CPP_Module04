/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:29:44 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/06 00:19:16 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria/Registry.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream> // cout

#define UNUSED __attribute__ ((unused))


// Constants

const std::string	& AMateria::c_type = "(unspecific)";


// Canonical Four

AMateria::AMateria		(void)								{ ft_register(); }
AMateria::AMateria		(UNUSED const AMateria & original)	{ ft_register(); }
AMateria				& AMateria::operator = (const AMateria & other)
{ if (& other == this) return *this; return *this; }
AMateria::~ AMateria	(void)								{ ft_deregister(); }


// Accessors

const std::string	& AMateria::getType(void) const
{ return ft_virtual_type(); }


// Methods

void	AMateria::use(const ICharacter & target) const
{ std::cout << "A Materia use upon " << target.getName() << '\n'; }

const std::string	& AMateria::ft_virtual_type(void) const { return c_type; }


// Utilities

void	AMateria::ft_register(void)		const
{ Registry::ft_get().ft_register(	*this); }
void	AMateria::ft_deregister(void)	const
{ Registry::ft_get().ft_deregister(	*this); }
