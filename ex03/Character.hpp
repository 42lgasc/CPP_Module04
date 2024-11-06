/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:57:24 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/26 22:04:39 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# define WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))

class Character: public ICharacter {
	static const size_t	c_inventory_size = 4;

	const std::string	name;
	const AMateria		*inventory [c_inventory_size];

	Character	(void);
public:
	Character	(const Character &);
	Character	& operator = (const Character &);
	~ Character	(void);

	Character	(const std::string & name);

	const std::string	& getName(void) const WARN_UNUSED_RESULT;

	void	equip(const AMateria *);
	void	unequip(int slot);
	void	use(int slot, const ICharacter & target) const;

private:
	void	ft_spill(void);
	void	ft_set_inventory(const AMateria *const (&) [c_inventory_size]);
};
#endif
