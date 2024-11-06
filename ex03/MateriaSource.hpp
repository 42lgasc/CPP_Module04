/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:28:02 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/26 21:54:08 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"

# define WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))

class MateriaSource: public IMateriaSource {
	static const size_t	c_slots = 4;

	const AMateria	*materia [c_slots];

public:
	MateriaSource	(void);
	MateriaSource	(const MateriaSource &);
	MateriaSource	& operator = (const MateriaSource &);
	~ MateriaSource	(void);

	void			learnMateria(const AMateria *);
	const AMateria	*createMateria(const std::string & type) const
					WARN_UNUSED_RESULT;

private:
	void	ft_forget(void);
	void	ft_set_memory(const AMateria *const (&) [c_slots]);
};
#endif
