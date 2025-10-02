/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:03:30 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 15:57:13 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* an[100];
	for (int i = 0; i < 100; i++) {
		if (i < 50)
			an[i] = new Dog;
		if (i >= 50)
			an[i] = new Cat;
	}
	for (int i = 0; i < 100; i++) {
		delete an[i];
	}
}