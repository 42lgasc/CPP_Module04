/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:57:46 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/18 17:00:04 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		DOG_HPP
# define	DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	static const std::string	type;

	const Brain	*brain;

public:
	Dog		(void);
	Dog		(const Dog &);
	Dog		& operator = (const Dog &);
	~ Dog	(void);

	const std::string	& getType(void) const;

	void	makeSound(void) const;
};
#endif
