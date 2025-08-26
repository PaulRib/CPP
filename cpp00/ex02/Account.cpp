/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribolzi <pribolzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:23:20 by pribolzi          #+#    #+#             */
/*   Updated: 2025/08/25 17:56:42 by pribolzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals) ;
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount
	<< ";created" << std::endl;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount
	<< ";closed" << std::endl;
}

void Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:"
	<< deposit;
	_amount += deposit;
	_nbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if (withdrawal > Account::checkAmount()) {
		Account::_displayTimestamp();
		std::cout << " index:" << _accountIndex << ";p_amount" << _amount
		<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:"
	<< withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals++;
	std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
	<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
	<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void ) {
	time_t now = time(NULL);
	struct tm *t = localtime(&now);

	char buffer[18];
	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", t);
	std::cout << buffer;
}
