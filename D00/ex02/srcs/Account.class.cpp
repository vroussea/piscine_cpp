/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 18:02:33 by vroussea          #+#    #+#             */
/*   Updated: 2018/01/08 18:02:33 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account( void ) {
}

Account::Account( int initial_deposit ) : _amount(initial_deposit) {
    this->_accountIndex = Account::_nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = Account::_nbAccounts;

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";created" << std::endl;

    Account::_totalAmount += this->_amount;

    Account::_nbAccounts += 1;
}

Account::~Account( void ) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";closed" << std::endl;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_totalAmount -= this->_amount;
    Account::_nbAccounts -= 1;
}

int	    Account::getNbAccounts( void ) {
    return Account::_nbAccounts;
}

int	    Account::getTotalAmount( void ) {
    return Account::_totalAmount;
}

int	    Account::getNbDeposits( void ) {
    return Account::_totalNbDeposits;
}

int	    Account::getNbWithdrawals( void ) {
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits();
    std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << checkAmount();
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const {
    static int nb_access = 0;
    nb_access++;
    return this->_amount;
}


int     Account::_nbAccounts = 0;
int	    Account::_totalAmount = 0;
int	    Account::_totalNbDeposits = 0;
int	    Account::_totalNbWithdrawals = 0;


void	Account::makeDeposit( int deposit ) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    this->_amount += deposit;
    this->_totalNbDeposits++;
    Account::_nbDeposits++;
    std::cout << ";deposits:" << deposit;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    if (withdrawal > this->_amount) {
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    else {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        std::cout << ";withdrawal:" << withdrawal;
        std::cout << ";amount:" << this->_amount;
        std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
}

void	Account::_displayTimestamp( void ) {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    time_t tt = std::chrono::system_clock::to_time_t(now);

    tm local_tm = *localtime(&tt);

    std::cout << "[";
    std::cout << local_tm.tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << local_tm.tm_mon + 1;
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << local_tm.tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << local_tm.tm_hour;
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << local_tm.tm_min;
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << local_tm.tm_sec;
    std::cout << "] ";
}
