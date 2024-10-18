/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:07:59 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/18 17:01:01 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CAT_HPP
# define	CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	static const std::string	type;

	const Brain	*brain;

public:
	Cat		(void);
	Cat		(const Cat &);
	Cat		& operator = (const Cat &);
	~ Cat	(void);

	const std::string	& getType(void) const;

	void	makeSound(void) const;
};
#endif
