/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:51:12 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/13 17:07:55 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
	public :
		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);