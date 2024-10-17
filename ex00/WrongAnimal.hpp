/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:17:21 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/17 21:51:45 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WRONG_ANIMAL_HPP
# define	WRONG_ANIMAL_HPP

# include <string>

class WrongAnimal {
protected:
	static const std::string	type;

public:
	WrongAnimal		(void);
	WrongAnimal		(const WrongAnimal &);
	WrongAnimal		& operator = (const WrongAnimal &);
	~ WrongAnimal	(void);

	static const std::string	& getType(void);

	static void	makeSound(void);
};
#endif
