#pragma once

struct Memento;

struct BankAccount {
	int balance_{};

	BankAccount() = default;
	BankAccount(int value);

	Memento deposit(int value);
	void cancel_transaction(const Memento& m);
};