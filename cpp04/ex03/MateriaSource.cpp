/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:54:52 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/13 19:42:50 by pribolzi         ###   ########.fr       */
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
	for (int i = 0; i < 4; i++) {
		if (copy._learned[i])
			_learned[i] = copy._learned[i]->clone();
		else
			_learned[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (_learned[i])
			delete _learned[i];
//	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& copy) {
	if (this != &copy) {
		for (int i = 0; i < 4; i++) {
			if (_learned[i])
				delete _learned[i];
			if (copy._learned[i]) {
				_learned[i] = copy._learned[i]->clone();
			}
			else
				_learned[i] = NULL;
		}
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