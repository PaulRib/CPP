/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 14:48:13 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/24 15:58:27 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> vec;
	vec.push_back(5);
	vec.push_back(8);
	vec.push_back(40);
	vec.push_back(6);
	vec.push_back(65);
	try {
		std::cout << "Test avec une valeur dans le vector : " << std::endl;
		easyfind(vec, 65);
		std::cout << "Test avec une valeur dans le vector : " << std::endl;
		easyfind(vec, 40);
		std::cout << "Test avec une valeur  qui n'est pas dans le vector : " << std::endl;
		easyfind(vec, 80);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}