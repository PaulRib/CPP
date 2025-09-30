/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:04:24 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/17 17:58:35 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	Fixed const c( Fixed( 999 ) / Fixed (5));
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << c << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	std::cout << Fixed::max( c, b ) << std::endl;
// 	std::cout << Fixed::min( a, b ) << std::endl;
// 	std::cout << Fixed::min( c, b ) << std::endl;
// 	return 0;
// }
