/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:55:42 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/16 16:33:34 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
	private :
		int _rawBits;
		static const int _fracBits = 8;
	public :
		Fixed();
		Fixed(const int integer);
		Fixed(const float number);
		Fixed(const Fixed &first);
		~Fixed();
		float toFloat (void) const;
		int toInt(void) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw);
		Fixed& operator=(const Fixed& copy);
};

std::ostream &operator<<(std::ostream& os, const Fixed& fix);

#endif 