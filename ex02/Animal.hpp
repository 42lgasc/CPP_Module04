/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:49:24 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/25 23:25:11 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ANIMAL_HPP
# define	ANIMAL_HPP

# include <string>

class Animal {
protected:
	static const std::string	type;

	Animal				(void);
	Animal				(const Animal &);
	// Wear your PPE: Privacy Prevents Erosion! ~~lgasc 2024-10-25 22:21
	Animal				& operator = (const Animal &);
public:
	virtual ~ Animal	(void) = 0;

	virtual const std::string	& getType(void) const = 0;

	virtual void	makeSound(void) const = 0;
};
#endif
