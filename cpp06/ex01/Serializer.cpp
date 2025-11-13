/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:43:01 by pribolzi          #+#    #+#             */
/*   Updated: 2025/11/13 16:40:39 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::~Serializer() {}

Serializer& Serializer::operator=(const Serializer& copy) {
	(void)copy;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	uintptr_t i = 0;

	if (ptr)
		i = reinterpret_cast<uintptr_t>(ptr);
	return (i);
}

Data* Serializer::deserialize(uintptr_t raw) {
	Data* dt;

	dt = reinterpret_cast<Data *>(raw);
	return (dt);
}