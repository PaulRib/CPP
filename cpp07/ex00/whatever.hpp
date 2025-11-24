/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:00:05 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/19 15:31:08 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

template <typename T>

void swap(T &a, T &b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>

T& min(T &a, T &b) {
	if (a == b || b < a)
		return (b);
	return (a);
}

template <typename T> 

T& max(T &a, T &b) {
	if (a == b || b > a)
		return (b);
	return (a);
}
