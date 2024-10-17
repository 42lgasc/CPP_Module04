/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:57:46 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 23:32:01 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		DOG_HPP
# define	DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	static const std::string	type;

public:
	Dog		(void);
	Dog		(const Dog &);
	Dog		& operator = (const Dog &);
	~ Dog	(void);

	const std::string	& getType(void) const;

	void	makeSound(void) const;
};
#endif
