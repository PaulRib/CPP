/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:39:47 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/22 16:04:42 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {
}

Point::Point(const float x, const float y): _x(x), _y(y){
}

Point::Point(const Point &first):  _x(first._x) , _y(first._y){
}

Fixed Point::getX() const{
	return (_x);
}

Fixed Point::getY() const{
	return (_y);
}

Point::~Point() {
}

Point& Point::operator=(const Point& copy){
	(void)copy;
	return (*this);
}
