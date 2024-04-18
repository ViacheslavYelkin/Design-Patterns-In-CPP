#pragma once

#include <vector>
#include <initializer_list>

#include "BankAccountCommand.h"

class CompositeBankAccountCommand : public std::vector<BankAccountCommand>, public Command {
public:
	CompositeBankAccountCommand(const std::initializer_list<BankAccountCommand>& cmds);

	virtual void call() override;
	virtual void undo() override;

private:


};