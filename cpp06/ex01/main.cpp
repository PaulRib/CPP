/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:42:54 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/13 17:02:30 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data* dt1 = new Data;
	Data* dt2;
	uintptr_t i;
	uintptr_t j;

	dt1->num = 20;
	dt1->str = "test";
	i = Serializer::serialize(dt1);
	dt2 = Serializer::deserialize(i);
	std::cout << RED << "Test des valeurs et adresse de Data 1 et 2" << RESET << std::endl;
	std::cout << dt1->num << " | " << dt1->str << " | " << &dt1 << std::endl;
	std::cout << dt2->num << " | " << dt2->str << " | " << &dt2 << std::endl;
	j = Serializer::serialize(dt2);
	std::cout << RED << "Test des valeurs et adresse de uintptr 1 et 2" << RESET << std::endl;
	std::cout << i << " | " << &i << std::endl;
	std::cout << j << " | " << &j << std::endl;
	delete dt1;
}