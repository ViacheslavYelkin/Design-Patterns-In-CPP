#pragma once

#include "CreatureModifier.h"

class DoubleAttackModifier : public CreatureModifier {
public:
	DoubleAttackModifier(Creature& creature);

	virtual void handle() override;

};