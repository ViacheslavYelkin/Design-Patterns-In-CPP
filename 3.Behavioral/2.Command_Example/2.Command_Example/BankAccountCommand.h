#pragma once

#include "Command.h"
#include "BankAccountAction.h"

class BankAccount;

class BankAccountCommand : Command{
public:
	
	BankAccountCommand(BankAccount& account, BankAccountAction action, int amount);

	virtual void call() override;
	virtual void undo() override;

private:
	BankAccount& account_;
	BankAccountAction action_;
	int amount_{};
	bool succeeded_{};
};