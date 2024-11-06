/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:41:51 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/26 21:54:34 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_MATERIA_SOURCE_HPP
# define I_MATERIA_SOURCE_HPP

# include <string>

# define WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))

class AMateria;

class IMateriaSource {
protected:
	IMateriaSource				(void)						{}
	IMateriaSource				(const IMateriaSource &)	{}
	// Wear your PPE: Privacy Prevents Erosion! ~~lgasc 2024-10-25 22:21
	IMateriaSource				& operator = (const IMateriaSource &)
															{ return *this; }
public:
	virtual ~ IMateriaSource	(void)						{}

	virtual void			learnMateria(const AMateria *) = 0;
	virtual const AMateria	*createMateria(const std::string & type) const
							WARN_UNUSED_RESULT = 0;
};
#endif
