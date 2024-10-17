/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:07:59 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 23:24:14 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WRONG_CAT_HPP
# define	WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	static const std::string	type;

public:
	WrongCat	(void);
	WrongCat	(const WrongCat &);
	WrongCat	& operator = (const WrongCat &);
	~ WrongCat	(void);

	static const std::string	& getType(void);

	static void	makeSound(void);
};
#endif
