/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:48:11 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/24 16:26:54 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

class NoOccFoundException : public std::exception {
	const char* what() const throw() {
		return ("No occurence found");
	}
};

template <typename T>

void easyfind(T vec, int occ) {
	typename T::iterator it = std::find(vec.begin(), vec.end(), occ);

	if (it != vec.end()) {
		int i = it - vec.begin();
		std::cout << "Occurence : " << occ << " found at index : " << i  << std::endl;
		return;
	}
	throw NoOccFoundException();
}
