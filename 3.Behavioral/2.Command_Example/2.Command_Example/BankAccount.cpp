#include "BankAccount.h"

bool BankAccount::deposite(int amount)
{
	balance_ += amount;
	std::cout << *this << '\n';
	return true;
}

bool BankAccount::withdraw(int amount)
{
	if ((balance_ - amount) >= 0) {
		balance_ -= amount;
		std::cout << *this << '\n';
		return true;
	}

	std::cout << "Operation failed\n";
	return false;
	return false;
}

std::ostream& operator<<(std::ostream& os, const BankAccount& obj)
{
	os << "Bank account #" << &obj << " current balance: " << obj.balance_;
	return os;
}
