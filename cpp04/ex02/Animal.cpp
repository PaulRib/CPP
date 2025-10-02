/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:36:31 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 16:10:38 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(){
	_type = "unknown";
	std::cout << "An animal of " << _type << " type is created" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copy) {
	*this = copy;
	std::cout << "A copy of an " << _type << " animal is created" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "An animal of " << _type << " type has been destroyed" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& copy) {
	if (this != &copy) {
		_type = copy._type;
	}
	return (*this);
}

void AAnimal::makeSound() const{
	std::cout << "An unknown sound of animal is heared" << std::endl;
}

std::string AAnimal::getType() const{
	return (_type);
}