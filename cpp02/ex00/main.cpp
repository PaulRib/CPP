/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:55:44 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/17 17:58:53 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

// int main( void ) {
// 	Fixed a;
// 	Fixed b( a );
// 	Fixed c;
// 	c = b;
// 	std::cout << a.getRawBits() << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;
// 	a.setRawBits(5);
// 	std::cout << a.getRawBits() << std::endl;
// 	b.setRawBits(9);
// 	std::cout << b.getRawBits() << std::endl;
// 	c = b;
// 	std::cout << c.getRawBits() << std::endl;
// 	return 0;
// }