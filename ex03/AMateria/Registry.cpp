/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Registry.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:19:53 by lgasc             #+#    #+#             */
/*   Updated: 2024/11/06 00:16:10 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Registry/Node.hpp"
#include "Registry.hpp"


// Canonical Four

AMateria::Registry::Registry	(void): start (NULL) {}
// No copy constructor, as this is a singleton class.
// No assignment operator, as this is a singleton class.
///> Do you believe in magic?
AMateria::Registry::~ Registry	(void)
{ while (start != NULL) delete & start->entry; }


// Accessors

AMateria::Registry	& AMateria::Registry::ft_get(void)
{ static Registry	r; return r; }


// Methods

void	AMateria::Registry::ft_register(const AMateria & m) {
	Node	**n (& start);
	while (*n != static_cast <Node *>(NULL)) n = & (**n).next;
	*n = new Node (m);
}
void	AMateria::Registry::ft_deregister(const AMateria & m) {
	Node	**n (& start);
	while (*n != static_cast <Node *>(NULL) && & m != & (**n).entry)
		n = & (**n).next;
	if (*n == static_cast <Node *>(NULL)) return ;
	Node *const	hold ((**n).next);
	delete static_cast <Node *>(*n);
	*n = hold;
}
