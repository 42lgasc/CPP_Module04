/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:18:03 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/05 22:44:44 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_REGISTRY_NODE_HPP
# define A_MATERIA_REGISTRY_NODE_HPP

# include "../Registry.hpp"

class AMateria::Registry::Node {
public:
	const AMateria	& entry;
	Node			*next;

private:
	Node	(void);
	Node	(				const Node &);
	Node	& operator = (	const Node &);
public:
	~ Node	(void);

	Node	(const AMateria &);
};
#endif
