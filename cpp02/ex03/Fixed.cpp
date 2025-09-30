/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:55:38 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/18 16:06:15 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer) : _rawBits(0) {
	//std::cout << "Int constructor called" << std::endl;
	_rawBits = integer << _fracBits;
}

Fixed::Fixed(const float number) : _rawBits(0) {
	//std::cout << "Float constructor called" << std::endl;
	_rawBits = roundf(number * 256);
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &first) {
	//std::cout << "Copy constructor called" << std::endl;
	*this = first;
}

Fixed& Fixed::operator=(const Fixed& copy) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_rawBits = copy.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed& copy) {
	Fixed  tmp;

	tmp._rawBits = this->_rawBits + copy._rawBits;
	return (tmp);
}

Fixed Fixed::operator-(const Fixed& copy) {
	Fixed  tmp;

	tmp._rawBits = this->_rawBits - copy._rawBits;
	return (tmp);
}

Fixed Fixed::operator*(const Fixed& copy) {
	Fixed  tmp;

	tmp._rawBits = this->_rawBits * copy._rawBits;
	tmp._rawBits >>= _fracBits;
	return (tmp);
}

Fixed Fixed::operator/(const Fixed& copy) {
	Fixed  tmp;

	tmp._rawBits = (this->_rawBits << _fracBits) / copy._rawBits;
	return (tmp);
}

bool Fixed::operator>(const Fixed& copy) {
	return (this->_rawBits > copy._rawBits);
}

bool Fixed::operator<(const Fixed& copy) {
	return (this->_rawBits < copy._rawBits);
}

bool Fixed::operator>=(const Fixed& copy) {
	return (this->_rawBits >= copy._rawBits);
}

bool Fixed::operator<=(const Fixed& copy) {
	return (this->_rawBits <= copy._rawBits);
}

bool Fixed::operator==(const Fixed& copy) {
	return (this->_rawBits == copy._rawBits);
}

bool Fixed::operator!=(const Fixed& copy) {
	return (this->_rawBits != copy._rawBits);
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

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;

	++*this;
	return (tmp);
}

Fixed Fixed::operator++() {
	this->_rawBits++;

	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;

	--*this;
	return (tmp);
}

Fixed Fixed::operator--() {
	this->_rawBits--;

	return (*this);
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second) {
	if (first._rawBits > second._rawBits)
		return (second);
	return (first);
}

Fixed& Fixed::min(Fixed& first,Fixed& second) {
	if (first > second)
		return (second);
	return (first);
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second) {
	if (first._rawBits > second._rawBits)
		return (first);
	return (second);
}

Fixed& Fixed::max(Fixed& first,Fixed& second) {
	if (first > second)
		return (first);
	return (second);
}