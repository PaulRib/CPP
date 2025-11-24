/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:35:21 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/19 16:23:45 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void charUp(char &c) {
    c += 1;
}

void charShow(const char &c) {
    std::cout << c;
}

void printInt(const int &i) {
	std::cout << i << " ";
}

void upInt(int &i) {
	i += 5;
}

int main() {
    char test[3] = {'c', 'd', 'e'};

    std::cout << "--- Test 1 (char) ---\n" << std::endl;
    std::cout << "Original : " << test << std::endl;
    
    ::iter(test, 3, charUp);
    
    std::cout << "Apres charUp : ";
    ::iter(test, 3, charShow);
    std::cout << std::endl;
    
    std::cout << "-----------------------" << std::endl;

	int numbers[] = {10, 20, 30, 40};
	std::cout << "--- Test 2 (int) ---\n" << std::endl;
    std::cout << "Original : ";
	::iter(numbers, 4, printInt);
	std::cout << std::endl;
	::iter(numbers, 4, upInt);
	std::cout << "Apres upInt : ";
	::iter(numbers, 4, printInt);
	std::cout << std::endl;
}