/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:15:11 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/02 14:17:40 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	//std::cout << "Constructor of Brain called" << std::endl;
}

Brain::Brain(const Brain& copy) {
	*this = copy;
	//std::cout << "Copy constructor of Brain called" << std::endl;
}

Brain::~Brain() {
	//std::cout << "Destructor of Brain called" << std::endl;
}

Brain& Brain::operator=(const Brain& copy) {
	if (this != &copy)
		*_ideas = *copy._ideas;
	return (*this);
}