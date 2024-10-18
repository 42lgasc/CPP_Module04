/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgasc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:27:34 by lgasc             #+#    #+#             */
/*   Updated: 2024/10/18 17:31:58 by lgasc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {
	const Animal		*a [8] = { new Dog, new Dog, new Dog, new Dog,
		new Cat, new Cat, new Cat, new Cat };

	const Animal *const	d = new Dog;
	const Animal *const	c = new Cat;

	// should not create a leak
	delete d;
	delete c;

	for (size_t i = 0; i < 8; ++ i) delete a [i];
}
