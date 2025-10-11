/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:42:45 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/08 17:05:35 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _b(new Brain) {
	_type = "Cat";
	std::cout << "One " << _type << " just appeared to ask you some food" << std::endl;
}

Cat::Cat(const Cat& copy) : _b(new Brain) {
	*this = copy;
	std::cout << "A copy" << _type << " appeared" << std::endl;
}

Cat::~Cat() {
	std::cout << "The " << _type << " scratched you while you were deleting him" << std::endl;
	delete _b;
}

Cat& Cat::operator=(const Cat& copy) {
	if (this != &copy) {
		_type = copy._type;
	}
	return (*this);
}

void Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}