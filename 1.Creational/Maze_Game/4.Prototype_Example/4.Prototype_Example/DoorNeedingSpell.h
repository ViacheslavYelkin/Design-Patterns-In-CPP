#pragma once

#include "Door.h"

class DoorNeedingSpell : public Door {

public:
	DoorNeedingSpell();
	DoorNeedingSpell(Room*, Room*);

	virtual void Enter() override;
};