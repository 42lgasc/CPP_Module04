/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:23:34 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/06 00:20:26 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"


// Canonical Four

// No default constructor, due to name requirement.
Character::Character	(const Character & original)
: ICharacter (original), name (original.name)
{ ft_spill(); ft_set_inventory(original.inventory); }
Character				& Character::operator = (const Character & other) {
	if (& other == this) return *this;
	ICharacter::operator = (other);
	ft_spill();
	ft_set_inventory(other.inventory);
	return *this;
}
Character::~ Character	(void) {
	for (size_t i = 0; i < c_inventory_size; ++ i)
		if (inventory [i] != NULL) delete inventory [i];
}


// other Constructors

Character::Character	(const std::string & new_name)
: name (new_name), inventory () {}


// Accessors

const std::string	& Character::getName(void) const { return name; }


// Methods

void	Character::equip(const AMateria *const m) {
	for (size_t i = 0; i < c_inventory_size; ++ i)
		if (inventory [i] == NULL) { inventory [i] = m; return ; }
	delete m;
}
void	Character::unequip(const int slot)
{ if (static_cast <size_t>(slot) < c_inventory_size) inventory [slot] = NULL; }
void	Character::use(const int slot, const ICharacter & target) const {
	if (static_cast <size_t>(slot) < c_inventory_size
			&& inventory [slot] != NULL) inventory [slot]->use(target);
}


// Utilities

void	Character::ft_spill(void)
{ for (size_t i = 0; i < c_inventory_size; ++ i) inventory [i] = NULL; }
void	Character::ft_set_inventory(
			const AMateria *const (& new_inventory) [c_inventory_size]) {
	for (size_t i = 0; i < c_inventory_size; ++ i) {
		if		(inventory		[i] != NULL) delete inventory [i];
		if		(new_inventory	[i] != NULL)
			inventory [i] = new_inventory [i]->clone();
		else if (inventory		[i] != NULL) inventory [i] = NULL;
	}
}
