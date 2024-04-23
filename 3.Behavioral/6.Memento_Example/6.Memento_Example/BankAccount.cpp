#include "BankAccount.h"
#include "Memento.h"

BankAccount::BankAccount(int value)
{
}

Memento BankAccount::deposit(int value)
{
	balance_ += value;
	return {balance_};
}

void BankAccount::cancel_transaction(const Memento& m)
{
	balance_ = m.balance_;
}
