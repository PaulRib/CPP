/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:01:07 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/21 14:38:09 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include <ctime>
#include <cstdlib>

template<typename T>

class Array {
	private:
		T	*_Array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& copy);
		Array& operator=(const Array& copy);
		~Array();
		unsigned int size() const;
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		class OutOfBoundException : public std::exception {
			public:
				const char* what() const throw();
		};
};

template<typename T>
Array<T>::Array() : _Array(new T[0]), _size(0) {
}

template<typename T>
Array<T>::Array(unsigned int n) : _Array(new T[n]), _size(n) {
}

template<typename T>
Array<T>::Array(const Array& copy) {
	_size = copy._size;
	_Array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_Array[i] = copy._Array[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& copy) {
	if (this == &copy)
		return (*this);
	delete[] _Array;
	_size = copy._size;
	_Array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_Array[i] = copy._Array[i];
	return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size)
		throw OutOfBoundException();
	return (_Array[index]);
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const{
	if (index >= _size)
		throw OutOfBoundException();
	return (_Array[index]);
}

template<typename T>
Array<T>::~Array() {
	delete[] _Array;
}

template<typename T>
unsigned int Array<T>::size() const{
	return (_size);
}

template<typename T>
const char* Array<T>::OutOfBoundException::what() const throw() {
	return ("Index is Out of Bound");
}