/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:39:49 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/22 18:21:15 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {
	private :
		Fixed const _x;
		Fixed const _y;
	public :
		Point();
		Point(const float x, const float y);
		Point(const Point &p);
		Point& operator=(const Point& copy);
		~Point();
		Fixed getX() const ;
		Fixed getY() const ;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);