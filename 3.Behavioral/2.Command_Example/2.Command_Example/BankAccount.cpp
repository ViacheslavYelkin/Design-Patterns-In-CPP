#include "BankAccount.h"

BankAccount::BankAccount() :
	success_{false}
{
}

bool BankAccount::deposite(int amount)
{
	balance_ += amount;
	std::cout << *this << '\n';
	return success_ = true;
}

bool BankAccount::withdraw(int amount)
{
	if ((balance_ - amount) >= 0) {
		balance_ -= amount;
		std::cout << *this << '\n';
		return success_ = true;
	}

	std::cout << "Operation failed\n";
	return success_ = false;
}

std::ostream& operator<<(std::ostream& os, const BankAccount& obj)
{
	os << "Bank account #" << &obj << " current balance: " << obj.balance_;
	return os;
}
