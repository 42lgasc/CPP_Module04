/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Node.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:06:21 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/05 23:52:08 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Node.hpp"


// Canonical Four

// No default constructor, due to reference requirement.
AMateria::Registry::Node::Node		(const Node & original)
: entry (original.entry), next (original.next) {}
// No assignment operator, as the `entry` shall be read only.
AMateria::Registry::Node::~ Node	(void) {}


// other Constructors

AMateria::Registry::Node::Node	(const AMateria & m): entry (m), next (NULL) {}
