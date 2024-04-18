#include <iostream>

#include "BankAccount.h"
#include "BankAccountCommand.h"
#include "CompositeBankAccountCommand.h"

int main(int argc, char** argv) {

	BankAccount acc;
	BankAccountCommand cmd{acc, BankAccountAction::withdraw, 200};

	CompositeBankAccountCommand cbac{ 
		{
			BankAccountCommand{acc, BankAccountAction::deposite, 100},
			BankAccountCommand{acc, BankAccountAction::deposite, 100},
			BankAccountCommand{acc, BankAccountAction::withdraw, 50},
		} 
	};

	cbac.call();

	std::cout << "------------------------------\n";

	cbac.undo();

	return EXIT_SUCCESS;
}