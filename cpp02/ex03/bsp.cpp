/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:39:43 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/22 18:19:28 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float area(Point const p1, Point const p2, Point const p3) {
	Fixed result(p1.getX() * (p2.getY() - p3.getY()) +
					p2.getX() * (p3.getY() - p1.getY()) +
					p3.getX() * (p1.getY() - p2.getY()));
	return (result.toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float abc = std::fabs(area(a, b, c));
	float pab = std::fabs(area(point, a, b));
	float pbc = std::fabs(area(point, b, c));
	float pac = std::fabs(area(point, a, c));

	float all = pab + pbc + pac;
	if (pab == 0.0f || pbc == 0.0f || pac == 0.0f)
		return (false);
	if (all == abc)
		return (true);
	return (false);
}