/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:49:24 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/25 23:51:16 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ANIMAL_HPP
# define	ANIMAL_HPP

# include <string>

class Animal {
protected:
	static const std::string	type;

public:
	Animal				(void);
	Animal				(const Animal &);
protected: // Wear your PPE: Privacy Prevents Erosion! ~~lgasc 2024-10-25 22:21
	Animal				& operator = (const Animal &);
public:
	virtual ~ Animal	(void);

	virtual const std::string	& getType(void) const;

	virtual void	makeSound(void) const;
};
#endif
