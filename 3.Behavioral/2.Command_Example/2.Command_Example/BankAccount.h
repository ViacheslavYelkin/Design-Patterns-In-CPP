#pragma once

#include <iostream>

class BankAccount {
	friend std::ostream& operator<<(std::ostream& os, const BankAccount& obj);

public:

	BankAccount() = default;

	bool deposite(int amount);
	bool withdraw(int amount);

private:
	int balance_{};
};