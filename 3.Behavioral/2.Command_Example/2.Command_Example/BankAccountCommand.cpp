#include "BankAccountCommand.h"
#include "BankAccount.h"

BankAccountCommand::BankAccountCommand(BankAccount& account, BankAccountAction action, int amount)
	: account_{ account }, action_{ action }, amount_{ amount }, succeeded_{false}
{
}

void BankAccountCommand::call()
{
	switch (action_) {
	case BankAccountAction::deposite:
		succeeded_ = account_.deposite(amount_);
		break;
	case BankAccountAction::withdraw:
		succeeded_ = account_.withdraw(amount_);
		break;
	}
}

void BankAccountCommand::undo()
{
	if (!succeeded_) {
		return;
	}

	switch (action_) {
	case BankAccountAction::deposite:
		account_.withdraw(amount_);
		break;
	case BankAccountAction::withdraw:
		account_.deposite(amount_);
		break;
	}
}
