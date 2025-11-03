/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:49:49 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/20 17:46:24 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _b(new Brain){
	_type = "Dog";
	std::cout << "A new version of a " << _type << " is created" << std::endl;
}

Dog::Dog(const Dog& copy) : _b(new Brain){
	std::cout << "The clone of a " << _type << " is successfully created" << std::endl;
	_type = copy._type;
	*_b = *copy._b;
}

Dog::~Dog() {
	std::cout << "A " << _type << "is destroyed" << std::endl;
	delete _b;
}

Dog& Dog::operator=(const Dog& copy) {
	if (this != &copy) {
		_type = copy._type;
		if (_b)
			delete _b;
		if (copy._b)
			_b = new Brain(*copy._b);
		else
			_b = new Brain();
	}
	return (*this);
}

void Dog::makeSound() const{
	std::cout << "Bark bark" << std::endl;
}