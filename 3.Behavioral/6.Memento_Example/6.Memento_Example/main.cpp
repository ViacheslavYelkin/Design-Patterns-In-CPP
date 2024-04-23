#include <iostream>

#include "BankAccount.h"
#include "Memento.h"

int main(int argc, char** argv) {

	BankAccount ba{};

	Memento m1 = ba.deposit(100);
	ba.deposit(300);

	std::cout << "Balance before: " << ba.balance_ << '\n';

	ba.cancel_transaction(m1);

	std::cout << "Balance after : " << ba.balance_ << '\n';

	return EXIT_SUCCESS;
}