#pragma once


struct Memento {
private:
	int balance_;

public: 
	Memento(int value);
	friend class BankAccount;
};