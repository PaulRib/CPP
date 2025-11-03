/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:15:11 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/20 17:13:21 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Constructor of Brain called" << std::endl;
}

Brain::Brain(const Brain& copy) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	std::cout << "Copy constructor of Brain called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Destructor of Brain called" << std::endl;
}

Brain& Brain::operator=(const Brain& copy) {
	if (this != &copy) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}