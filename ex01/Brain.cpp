/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:16:35 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/18 17:31:26 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream> // cout, endl

#define COLOR "\x1B[1;35m"
#define FAINT "\x1B[2;35m"
#define RESET "\x1B[0m"

Brain::Brain	(void)
{	std::cout << FAINT "Conception of brain..."			RESET << std::endl; }
Brain::Brain	(const Brain & original) : ideas (original.ideas)
{	std::cout << FAINT "Copy-Conception of a brain..."	RESET << std::endl; }
Brain			& Brain::operator = (const Brain & other) {
	std::cout << FAINT "A brain copies another..."		RESET << std::endl;
	for (size_t i = 0; i < size; ++ i) ideas [i] = other.ideas [i];
	return *this;
}
Brain::~ Brain	(void)
{	std::cout << FAINT "Dismantlement of a brain..."	RESET << std::endl; }
