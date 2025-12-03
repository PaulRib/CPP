/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:39:09 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/26 14:49:11 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		MutantStack();
		MutantStack(const MutantStack& copy);
		MutantStack& operator=(const MutantStack& copy);
		~MutantStack();
		iterator begin() {
			return (this->c.begin());
		};
		iterator end() {
			return (this->c.end());
		};
		const_iterator begin() const {
			return (this->c.begin());
		}
		const_iterator end() const {
			return (this->c.end());
		}
		reverse_iterator rbegin() {
			return (this->c.rbegin());
		}
		reverse_iterator rend() {
			return (this->c.rend());
		}
		const_reverse_iterator rbegin() const {
			return (this->c.rbegin());
		}
		const_reverse_iterator rend() const {
			return (this->c.rend());
		}
};


template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy) : std::stack<T>(copy){
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& copy) {
	if (this != &copy)
		std::stack<T>::operator=(copy);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {}