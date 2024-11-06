/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Registry.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:07:29 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/05 22:59:54 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_REGISTRY_HPP
# define A_MATERIA_REGISTRY_HPP

# include "../AMateria.hpp"

# define WARN_UNUSED_RESULT __attribute__ ((warn_unused_result))

class AMateria::Registry {
	class Node;

	Node	*start;

	Registry	(void);
	Registry	(				const Registry &);
	Registry	& operator = (	const Registry &);
	~ Registry	(void);

public:
	static Registry	& ft_get(void) WARN_UNUSED_RESULT;

	void	ft_register(	const AMateria &);
	void	ft_deregister(	const AMateria &);
};
#endif
