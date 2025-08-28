/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:50:06 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/26 11:54:45 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& ref = str;

	std::cout << "Adress of str : " << &str << std::endl;
	std::cout << "Adress of str : " << ptr << std::endl;
	std::cout << "Adress of str : " << &ref << std::endl;

	std::cout << "Value of str : " << str << std::endl;
	std::cout << "Value of ptr : " << *ptr << std::endl;
	std::cout << "Value of ref : " << ref << std::endl;
}