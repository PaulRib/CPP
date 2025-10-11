/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:54:52 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/11 16:42:03 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_learned[i] = NULL;
//	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
//	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_learned[i])
			delete _learned[i];
	}
//	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	if (this != &copy) {
		*_learned = *copy._learned;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* tmp) {
	for (int i = 0; i < 4; i++) {
		if (!_learned[i]) {
			_learned[i] = tmp;
			return ;
		}
	}
	delete tmp;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_learned[i]) {
		if (type == _learned[i]->getType())
			return (_learned[i]->clone());
		}
	}
	return (0);
}