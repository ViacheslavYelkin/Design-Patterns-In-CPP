#pragma once

#include "MapSite.h"

class Room;

class Door : public IMapSite{

public:
	Door();
	Door(Room*, Room*);

	virtual void Enter() override;

private:
	Room* r1{};
	Room* r2{};
};