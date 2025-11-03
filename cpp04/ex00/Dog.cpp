/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:49:49 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/20 17:10:38 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "A new version of a " << _type << " is created" << std::endl;
}

Dog::Dog(const Dog& copy) {
	std::cout << "The clone of a " << _type << " is successfully created" << std::endl;
	_type = copy._type;
}

Dog::~Dog() {
	std::cout << "A " << _type << "is destroyed" << std::endl;
}

Dog& Dog::operator=(const Dog& copy) {
	if (this != &copy) {
		_type = copy._type;
	}
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "Bark bark" << std::endl;
}