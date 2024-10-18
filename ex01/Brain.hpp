/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:51:40 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/18 17:30:21 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
	static const size_t	size = 100;

	std::string	ideas [size];

public:
	Brain	(void);
	Brain	(const Brain &);
	Brain	& operator = (const Brain &);
	~ Brain	(void);
};
#endif
