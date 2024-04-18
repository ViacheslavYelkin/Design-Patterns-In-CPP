#include "CompositeBankAccountCommand.h"

CompositeBankAccountCommand::CompositeBankAccountCommand(const std::initializer_list<BankAccountCommand>& cmds) 
	: vector{cmds}
{
}

void CompositeBankAccountCommand::call()
{
	for (BankAccountCommand& cmd : *this) {
		cmd.call();
	}
}

void CompositeBankAccountCommand::undo()
{
	for (auto it = rbegin(); it != rend(); it++) {
		it->undo();
	}
}
