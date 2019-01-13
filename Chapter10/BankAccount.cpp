#include "BankAccount.h"

// Constructor
BankAccount::BankAccount(const std::string & client, 
	                     const std::string & num, double bal)
{
	name = client;
	acctnum = num;
	balance = bal;
}

void BankAccount::show(void) const
{
	using std::cout;
	cout << "Name: " << name << "\n";
	cout << "Account Number: " << acctnum << "\n";
	cout << "Balance: " << balance << "\n";
}

void BankAccount::deposit(double cash)
{
	balance += cash;
	std::cout << "Deposit " << cash << "\n";
}

void BankAccount::withdraw(double cash)
{
	balance -= cash;
	std::cout << "Withdraw " << cash << "\n";
}