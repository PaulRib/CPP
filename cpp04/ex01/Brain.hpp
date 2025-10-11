/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:12:52 by pribolzi          #+#    #+#             */
/*   Updated: 2025/10/08 16:51:20 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"

class Brain {
	private :
		std::string _ideas[100];
	public :
		Brain();
		Brain(const Brain& copy);
		virtual ~Brain();
		Brain& operator=(const Brain& copy);
};