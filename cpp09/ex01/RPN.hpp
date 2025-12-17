/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:27:58 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/09 18:31:24 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
#include <climits>

class RPN {
	private:
		std::stack<int> _st;
	public:
		RPN();
		RPN(const RPN& copy);
		~RPN();
		RPN& operator=(const RPN& copy);
		void parser(std::string input);
		void addOp();
		void subOp();
		void multOp();
		void divOp();
		class ErrorException : public std::exception {
			const char* what() const throw() {
				return ("Error");
			}
		};
};
