/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperron <bperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:30:03 by bperron           #+#    #+#             */
/*   Updated: 2023/03/08 12:01:24 by bperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

void Account::makeDeposit(int deposit) {
  int pre;

  pre = this->_amount;
  if (deposit < 0)
    deposit = 0;
  _totalNbDeposits++;
  _totalAmount += deposit;
  this->_amount += deposit;
  this->_nbDeposits++;
  _displayTimestamp();
  std::cout << " index:" << _accountIndex << ";p_amount:" << pre
            << ";deposit:" << deposit << ";amount:" << this->_amount
            << ";deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  int pre;

  pre = this->_amount;
  _displayTimestamp();
  if (withdrawal > this->_amount) {
    std::cout << " index:" << this->_accountIndex
              << ";p_amount:" << this->_amount << ";withdrawal:refused"
              << std::endl;
    return (false);
  }
  _totalNbWithdrawals++;
  _totalAmount -= withdrawal;
  this->_amount -= withdrawal;
  this->_nbWithdrawals++;
  std::cout << " index:" << _accountIndex
            << ";p_amount:" << this->_amount + withdrawal
            << ";withdrawal:" << withdrawal << ";amount:" << this->_amount
            << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
  return (true);
}

void Account::displayAccountsInfos() {
  _displayTimestamp();
  std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const {
  _displayTimestamp();
  std::cout << " index:" << _accountIndex << ";amount:" << this->_amount
            << ";deposits:" << this->_nbDeposits
            << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp() {
  std::time_t time = std::time(0);
  std::tm *time2 = std::localtime(&time);
  std::cout << "[" << time2->tm_year + 1900 << std::setw(2) << std::setfill('0')
            << time2->tm_mon << std::setw(2) << std::setfill('0')
            << time2->tm_mday << "_" << std::setw(2) << std::setfill('0')
            << time2->tm_hour << std::setw(2) << std::setfill('0')
            << time2->tm_min << std::setw(2) << std::setfill('0')
            << time2->tm_sec << "]";
}

Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts), _nbDeposits(0), _nbWithdrawals(0) {
  if (initial_deposit < 0)
    initial_deposit = 0;
  _displayTimestamp();
  _nbAccounts++;
  this->_amount = initial_deposit;
  this->_totalAmount += this->_amount;
  std::cout << " index:" << _accountIndex << ";amount:" << this->_amount
            << ";created" << std::endl;
}

Account::~Account() {
  this->_nbAccounts--;
  _displayTimestamp();
  std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
            << ";closed" << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;