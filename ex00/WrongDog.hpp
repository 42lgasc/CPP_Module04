/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:57:46 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 23:23:59 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WRONG_DOG_HPP
# define	WRONG_DOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
	static const std::string	type;

public:
	WrongDog	(void);
	WrongDog	(const WrongDog &);
	WrongDog	& operator = (const WrongDog &);
	~ WrongDog	(void);

	static const std::string	& getType(void);

	static void	makeSound(void);
};
#endif
