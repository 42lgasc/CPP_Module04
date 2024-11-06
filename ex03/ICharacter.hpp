/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:18:29 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/26 21:21:50 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_CHARACTER_HPP
# define I_CHARACTER_HPP

# include <string>

class AMateria;

# define WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))

class ICharacter {
protected:
	ICharacter				(void)					{}
	ICharacter				(const ICharacter &)	{}
	// Wear your PPE: Privacy Prevents Erosion! ~~lgasc 2024-10-25 22:21
	ICharacter				& operator = (const ICharacter &)
													{ return *this; }
public:
	virtual ~ ICharacter	(void)					{}

	virtual const std::string	& getName(void) const WARN_UNUSED_RESULT = 0;

	virtual void	equip(const AMateria *m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, const ICharacter & target) const = 0;
};
#endif
