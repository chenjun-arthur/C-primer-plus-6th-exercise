/*Chapter 10 Programming Exercises
1. Provide method definitions for the class described in Chapter Review Question 5
and write a short program that illustrates all the features.

Question 5. Define a class to represent a bank account. Data members should include the
depositor’s name, the account number (use a string), and the balance. Member functions
should allow the following:
n Creating an object and initializing it.
n Displaying the depositor’s name, account number, and balance
n Depositing an amount of money given by an argument
n Withdrawing an amount of money given by an argument
*/

#include "BankAccount.h"

int main()
{
	BankAccount clientTony = BankAccount("Tony", "156", 1000);
	clientTony.show();

	clientTony.deposit(500);
	clientTony.show();

	clientTony.withdraw(125);
	clientTony.show();

	return 0;
}