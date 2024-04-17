#pragma once

#include "CreatureModifier.h"

class DoubleDefenseModifier : public CreatureModifier{
public:
	DoubleDefenseModifier(Creature& creature);

	virtual void handle() override;
};