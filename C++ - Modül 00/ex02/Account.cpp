#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _accountIndex = (getNbAccounts());
    _amount += initial_deposit;
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount << ";created" << std::endl;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

void Account::displayAccountsInfos(void){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts;
    std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits;
    std::cout << ";witdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void)const{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";withdrawal:";
    if (_amount - withdrawal < 0)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    else
        std::cout << withdrawal;
    _amount = _amount - withdrawal;
    _nbWithdrawals++;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_withdrawals:" <<  std::endl;
    _totalAmount -= withdrawal;
    return(true);
}

void Account::makeDeposit(int deposit){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposit:" << _nbDeposits << std::endl;
    _totalAmount += deposit;
}

int Account::checkAmount(void)const{
    return (0);
}

int Account::getNbAccounts(void){
    return(_nbAccounts);
}

int Account::getTotalAmount(void){
    return(_totalAmount);
}

void Account::_displayTimestamp(void){
    std::time_t time;
    time = std::time(NULL);
    std::cout << std::setfill('0') << "["
        << std::setw(2) << 1900 + std::localtime(&time)->tm_year
        << std::setw(2) << 1 +  std::localtime(&time)->tm_mon
        << std::setw(2) << std::localtime(&time)->tm_mday << "_"
        << std::setw(2) << std::localtime(&time)->tm_hour
        << std::setw(2) << std::localtime(&time)->tm_min
        << std::setw(2) << std::localtime(&time)->tm_sec
        << "] ";
}

Account::~Account(void){
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed" << std::endl;
    _nbAccounts--;
    _totalAmount += _amount;
}
