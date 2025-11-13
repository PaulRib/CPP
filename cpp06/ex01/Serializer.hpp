/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:42:58 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/13 16:45:33 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

struct Data {
	int num;
	std::string str;
};

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer& copy);
		~Serializer();
		Serializer& operator=(const Serializer& copy);
	public: 
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};