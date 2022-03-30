/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fletcher <fletcher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:48:55 by fletcher          #+#    #+#             */
/*   Updated: 2022/03/30 17:12:46 by fletcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(){
	return _nbAccounts;
}

int Account::getTotalAmount(){
	return _totalAmount;
}

int Account::getNbDeposits(){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(){
	return _totalNbWithdrawals;
}

Account::Account(){}
Account::~Account(){
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed\n";
}

void Account::makeDeposit(int dep) {
	this->_amount += dep;
	this->_nbDeposits++;
	_totalAmount += dep;
	_totalNbDeposits++;
}

Account::Account(int init_dep) {
	_displayTimestamp();
	this->_accountIndex = _nbAccounts++;
	this->_amount = init_dep;
	this->_totalAmount += init_dep;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
}

bool Account::makeWithdrawal(int dep) {
	if (this->_amount > dep)
		return false;
	this->_amount -= dep;
	this->_nbWithdrawals++;
	_totalAmount -= dep;
	_totalNbWithdrawals++;
	return true;
}

int Account::checkAmount() const {
	return this->_amount;
}

void Account::displayAccountsInfos(){
	_displayTimestamp();
	//accounts:8;total:12442;deposits:8;withdrawals:6
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(){
	std::cout << "[19920104_091532]";
}
