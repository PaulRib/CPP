/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:55:38 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/16 17:15:19 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer) : _rawBits(0) {
	std::cout << "Int constructor called" << std::endl;
	_rawBits = integer << _fracBits;
}

Fixed::Fixed(const float number) : _rawBits(0) {
	std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(number * 256);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &first) {
	std::cout << "Copy constructor called" << std::endl;
	*this = first;
}

Fixed& Fixed::operator=(const Fixed& copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_rawBits = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const {
	return (_rawBits);
}

void Fixed::setRawBits( int const raw) {
	_rawBits = raw;
}

float Fixed::toFloat() const {
	return ((float)_rawBits / 256);
}

int Fixed::toInt() const {
	return (_rawBits >> _fracBits);
}

std::ostream &operator<<(std::ostream& os, const Fixed& fix) {
	os << fix.toFloat();
	return (os);
}