/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:59:57 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/19 15:49:27 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {
	int a = 5;
	int b = 10;
	char c = 'a';
	char d = 'z';

	std::cout << RED << "Test des int\n" << RESET << std::endl;
	std::cout << "Variable int a : " << a << ", variable int b : " << b << ", max : " << ::max(a, b) << std::endl;
	std::cout << "Variable int a : " << a << ", variable int b : " << b << ", min : " << ::min(a, b) << std::endl;
	::swap(a, b);
	std::cout << BLUE << "\nSwap des valeurs a et b\n" << RESET << std::endl;
	std::cout << "Variable int a : " << a << ", variable int b : " << b << ", max : " << ::max(a, b) << std::endl;
	std::cout << "Variable int a : " << a << ", variable int b : " << b << ", min : " << ::min(a, b) << std::endl;

	std::cout << RED << "\nTest des char\n" << RESET << std::endl;
	std::cout << "\nVariable char c : " << c << ", variable char d : " << d << ", max : " << ::max(c, d) << std::endl;
	std::cout << "Variable char c : " << c << ", variable char d : " << d << ", min : " << ::min(c, d) << std::endl;
	::swap(c, d);
	std::cout << BLUE << "\nSwap des valeurs c et d" << RESET << std::endl;
	std::cout << "\nVariable char c : " << c << ", variable char d : " << d << ", max : " << ::max(c, d) << std::endl;
	std::cout << "Variable char c : " << c << ", variable char d : " << d << ", min : " << ::min(c, d) << std::endl;
}