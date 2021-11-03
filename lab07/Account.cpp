#include "Account.h"

int Account::counter = 1;
Account::Account(double balance) 
{
	this->balance = balance;
	this->id = counter;
	counter++;
}

void Account::deposit(double amount) 
{
	this->balance += amount;
}

bool Account::withdraw(double amount) 
{
	if (balance >= amount) 
	{
		this->balance -= amount;
		return true;
	}
	return false;
}

int Account::getId() const 
{
	return this->id;
}

double Account::getBalance() const 
{
	return this->balance;
}

void Account::print(ostream& os) const 
{
	os << this->id;
	os << "\t";
	os << this->balance << endl;
}

ostream& operator<<(ostream& os, const Account& account) 
{
	account.print(os);
	return os;
}