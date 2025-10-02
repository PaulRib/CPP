/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:49:49 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 14:19:51 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _b(new Brain){
	_type = "Dog";
	std::cout << "A new version of a " << _type << " is created" << std::endl;
}

Dog::Dog(const Dog& copy) {
	std::cout << "The clone of a " << _type << " is successfully created" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	std::cout << "Congrats, you just erase from existence a good and happy " << _type << std::endl;
	delete _b;
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