/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:54:15 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/18 13:07:28 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base * generate(void) {
	int random = rand() % 3;
	switch (random) {
		case 0 :
			return (new A);
		case 1 :
			return (new B);
		case 2 :
			return (new C);
		default :
			return (NULL);
	}
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p))
	{
		std::cout << "The object is A type" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(p))
	{
		std::cout << "The object is B type" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(p))
	{
		std::cout << "The object is C type" << std::endl;
		return ;
	}
}

void identify(Base& p) {
	Base r;

	try {
		r = dynamic_cast<A &>(p);
		std::cout << "The object is A type" << std::endl;
		return ;
	}
	catch (std::exception &bc) {}
	try {
		r = dynamic_cast<B &>(p);
		std::cout << "The object is B type" << std::endl;
		return ;
	}
	catch (std::exception &bc) {}
	try {
		r = dynamic_cast<C &>(p);
		std::cout << "The object is C type" << std::endl;
		return ;
	}
	catch (std::exception &bc) {}
}