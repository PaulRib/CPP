/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:51:19 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/13 17:31:05 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
	std::srand(std::time(0));
	Base* p1 = generate();
	Base& c1 = *p1;
	Base* p2 = generate();
	Base& c2 = *p2;
	Base* p3 = generate();
	Base& c3 = *p3;
	
	identify(p1);
	identify(c1);
	identify(p2);
	identify(c2);
	identify(p3);
	identify(c3);
	delete p1;
	delete p2;
	delete p3;
}