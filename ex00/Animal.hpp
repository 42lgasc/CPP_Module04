/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:49:24 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 23:25:25 by lgasc            ###   ########.fr       */
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
	Animal				& operator = (const Animal &);
	virtual ~ Animal	(void);

	virtual const std::string	& getType(void) const;

	virtual void	makeSound(void) const;
};
#endif
