/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:36:31 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 15:54:27 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	_type = "unknown";
	std::cout << "An animal of " << _type << " type is created" << std::endl;
}

Animal::Animal(const Animal& copy) {
	*this = copy;
	std::cout << "A copy of an " << _type << " animal is created" << std::endl;
}

Animal::~Animal() {
	std::cout << "An animal of " << _type << " type has been destroyed" << std::endl;
}

Animal& Animal::operator=(const Animal& copy) {
	if (this != &copy) {
		_type = copy._type;
	}
	return (*this);
}

void Animal::makeSound() const{
	std::cout << "An unknown sound of animal is heared" << std::endl;
}

std::string Animal::getType() const{
	return (_type);
}