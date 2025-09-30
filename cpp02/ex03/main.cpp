/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:04:24 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/22 18:17:43 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point a(0.0f, 0.0f);
	Point b(4.0f, 0.0f);
	Point c(2.0f, 3.0f);
	Point p1(2.0f, 1.0f);
	Point p2(10.0f, 10.0f);
	Point p3(4.0f, 0.0f);
	Point p4(1.0f, 0.0f);

	std::cout << "Dans le triangle : " << bsp(a, b, c, p1) << std::endl;
	std::cout << "En dehors du triangle : " << bsp(a, b, c, p2) << std::endl;
	std::cout << "Sur un angle : " << bsp(a, b, c, p3) << std::endl;
	std::cout << "Sur un bord : " << bsp(a, b, c, p4) << std::endl;
}
