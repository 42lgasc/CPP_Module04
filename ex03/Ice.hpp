/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:44:43 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/05 16:39:17 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

# define WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))

class Ice: public AMateria {
	static const std::string	& c_type;

public:
	Ice		(void);
	Ice		(const Ice &);
	Ice		& operator = (const Ice &);
	~ Ice	(void);

	const Ice	*clone(void) const WARN_UNUSED_RESULT;
	void		use(const ICharacter & target) const;

private:
	const std::string	& ft_virtual_type(void) const WARN_UNUSED_RESULT;
};
#endif
