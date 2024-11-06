/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:52:35 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/05 16:40:37 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

# define WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))

class Cure: public AMateria {
	static const std::string	& c_type;

public:
	Cure	(void);
	Cure	(const Cure &);
	Cure	& operator = (const Cure &);
	~ Cure	(void);

	const Cure	*clone(void) const WARN_UNUSED_RESULT;
	void		use(const ICharacter & target) const;

private:
	const std::string	& ft_virtual_type(void) const WARN_UNUSED_RESULT;
};
#endif
