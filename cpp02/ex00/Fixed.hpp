/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:55:42 by pribolzi          #+#    #+#             */
/*   Updated: 2025/09/16 15:59:56 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {
	private :
		int _rawBits;
		static const int _fracBits = 8;
	public :
		Fixed();
		Fixed(const Fixed &first);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw);
		Fixed& operator=(const Fixed& copy);
};

#endif 