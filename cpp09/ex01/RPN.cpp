/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:33:10 by pribolzi          #+#    #+#             */
/*   Updated: 2025/12/13 18:03:48 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& copy) {
	_st = copy._st;
}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN& copy) {
	if (this != &copy)
		_st = copy._st;
	return (*this);
}

void RPN::addOp() {
	if (_st.size() < 2)
		throw ErrorException();
	int s_value = _st.top();
	_st.pop();
	int f_value = _st.top();
	
	_st.pop();
	int result;
	bool overflow_happened = __builtin_add_overflow(f_value, s_value, &result);
    if (overflow_happened)
		throw ErrorException();
	_st.push(result);
}

void RPN::subOp() {
	if (_st.size() < 2)
		throw ErrorException();
	int s_value = _st.top();
	_st.pop();
	int f_value = _st.top();
	_st.pop();
	if (s_value == 0 || f_value == 0)
		throw ErrorException();
	int result;
	bool overflow_happened = __builtin_sub_overflow(f_value, s_value, &result);
    if (overflow_happened)
		throw ErrorException();
	_st.push(result);
}

void RPN::multOp() {
	if (_st.size() < 2)
		throw ErrorException();
	int s_value = _st.top();
	_st.pop();
	int f_value = _st.top();
	_st.pop();
	int result;
	bool overflow_happened = __builtin_mul_overflow(f_value, s_value, &result);
    if (overflow_happened)
		throw ErrorException();
	_st.push(result);
}

void RPN::divOp() {
	if (_st.size() < 2)
		throw ErrorException();
	int s_value = _st.top();
	_st.pop();
	int f_value = _st.top();
	_st.pop();
	if (s_value == 0 || (f_value == INT_MIN && s_value == -1))
		throw ErrorException();
	int value = f_value / s_value;
	_st.push(value);
}

void RPN::parser(std::string input) {
	for (int i = 0; input[i]; ++i) {
		switch(input[i]) {
			case ' ':
				break;
			case '+':
				addOp();
				break;
			case '/':
				divOp();
				break;
			case '*':
				multOp();
				break;
			case '-':
				if (input[i + 1] && (input[i + 1]>=0 && input[i + 1] <= 9)) {
					_st.push((input[i + 1] - '0') * -1);
					i++;
				}
				else
					subOp();
				break;
			default :
				if (input[i] >= '0' && input[i] <= '9')
					_st.push(input[i] - '0');
				else
					throw ErrorException();
				break;
		}
	}
	if (_st.empty() || _st.size() > 1)
		throw ErrorException();
	std::cout << _st.top() << std::endl;
}