#include <iostream>
#include <cctype>
#include <limits>
#include <iomanip>
#include <string>
#include <sstream>
#include <ctime>
#include <locale>  

#include "Account.hpp"

//diff <(cut -c 21- outfile) <(cut -c 21- 19920104_091532.log) > difffile


// [19920104_091532] index:1;amount:54;created

Account::Account(int inital_deposit){
    _accountIndex = _nbAccounts;
    _nbAccounts++;
	_amount = inital_deposit;
    _totalAmount += inital_deposit; 
	_nbDeposits = 0;
	_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:"<< _accountIndex 
                << ";amount:"<< _amount << 
                ";created" << std::endl;
};


//  last seven line, closes the account
Account::~Account(){
    _displayTimestamp();
    std::cout << "index:"<< _accountIndex 
                << ";amount:"<< _amount 
                << ";closed" << std::endl;
};

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
   return _nbAccounts;
};

int	Account::getTotalAmount( void ) {
   return _totalAmount;
};

int	Account::getNbDeposits( void ){
    return _totalNbDeposits;
};

int	Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
};
// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
            << ";total:" << _totalAmount 
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    };



void Account::_displayTimestamp(){
    std::time_t result = std::time(NULL);
    std::tm * time_today = std::localtime(&result);

    std::cout << "[" << time_today->tm_year + 1900 
            << time_today->tm_mon +1
            << time_today->tm_mday
            << "_"
            << time_today->tm_hour 
            << time_today->tm_min
            << time_today->tm_sec << "] ";
}
//[19920104_091532] index:6;amount:754;deposits:0;withdrawals:0 
void Account:: displayStatus (void) const {
   _displayTimestamp();
     std::cout << "index:" << _accountIndex 
            << ";amount:" << _amount 
            << ";deposits:" << _nbDeposits
            << ";withdrawals:" <<  _nbWithdrawals << std::endl;
    };

int	Account:: checkAmount( void ) const{
    return _amount;
}

//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void Account:: makeDeposit( int deposit ){

int p_amount = _amount;

// update account stae
_amount +=deposit;
_nbDeposits++;
_totalAmount +=deposit;
_totalNbDeposits++;

     _displayTimestamp();
     std::cout << "index:" << _accountIndex 
            << ";p_amount:" << p_amount 
            << ";deposit:" << deposit
            << ";amount:"    << _amount
            << ";nb_deposits:" <<  _nbDeposits << std::endl;
};

// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool Account:: makeWithdrawal( int withdrawal ){

    // [19920104_091532] index:5;p_amount:23;withdrawal:refused
    _displayTimestamp();
    std::cout << "index:"<< _accountIndex 
    << ";p_amount:" << _amount;

    if (_amount < withdrawal)
    {
        std::cout << ";withdrawal:" << "refused" << std::endl; 
        return(false);
    }

_amount -=withdrawal;
_nbWithdrawals++;
_totalNbWithdrawals++;
_totalAmount -= withdrawal;

         std::cout  << ";withdrawal:" << withdrawal
            << ";amount:"    << _amount
            << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}