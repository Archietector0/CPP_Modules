#include "Account.hpp"

int	 Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	 Account::getTotalAmount( void ) {
    return _totalAmount;
}

int	 Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int	 Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void	Account::_displayTimestamp( void ) {
    time_t now = time(NULL);
    tm local = *localtime(&now);
    char buf[16];
    strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &local);
    std::cout << '[' << buf << ']';
}

void	Account::makeDeposit( int deposit ) {
    _amount += deposit;
    _totalAmount += deposit;
    ++_totalNbDeposits;
    ++_nbDeposits;
    _displayTimestamp();
    std::cout << " index:"      << _accountIndex     << ";"
              << "p_amount:"    << _amount - deposit << ";"
              << "deposit:"     << deposit           << ";"
              << "amount:"      << _amount           << ";"
              << "nb_deposits:" << _nbDeposits       << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    if (_amount >= withdrawal) {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        ++_nbWithdrawals;
        ++_totalNbWithdrawals;
        _displayTimestamp();
        std::cout << " index:"         << _accountIndex        << ";"
                  << "p_amount:"       << _amount + withdrawal << ";"
                  << "withdrawal:"     << withdrawal           << ";"
                  << "amount:"         << _amount              << ";"
                  << "nb_withdrawals:" << _nbWithdrawals       << ";" << std::endl;
        return true; 
    } else {
        _displayTimestamp();
        std::cout << " index:"            << _accountIndex        << ";"
                  << "p_amount:"          << _amount << ";"
                  << "withdrawal:refused" << std::endl;
        return false;
    }
}

int Account::checkAmount() const {
    ++_totalNbAmountChecks;
    return _amount;
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << " index:"      << _accountIndex       << ";"
              << "amount:"      << _amount             << ";"
              << "deposits:"    << _nbDeposits         << ";"
              << "withdrawals:" << _nbWithdrawals      << ";" << std::endl;
}

void Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << " accounts:"   << _nbAccounts         << ";"
              << "total:"       << _totalAmount        << ";"
              << "deposits:"    << _totalNbDeposits    << ";"
              << "withdrawals:" << _totalNbWithdrawals << ";" << std::endl;
}

Account::Account( int initial_deposit ) {

    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    ++_nbAccounts;
    _totalAmount += _amount;

    _displayTimestamp();

    std::cout << " index:" << _accountIndex << ";"
              << "amount:" << _amount       << ";"
              << "created" << std::endl;
}
	
Account::~Account( void ) {
    --_nbAccounts;
    _totalAmount -= _amount;

    _displayTimestamp();


    std::cout << " index:" << _accountIndex << ";"
              << "amount:" << _amount       << ";"
              << "closed"  << std::endl;

}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
int Account::_totalNbAmountChecks = 0;