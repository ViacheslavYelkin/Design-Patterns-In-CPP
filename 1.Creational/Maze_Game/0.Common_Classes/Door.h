#pragma once

#include "MapSite.h"

class Room;

class Door : public IMapSite{

public:
	Door();
	Door(Room*, Room*);

	virtual void Enter() override;
	virtual Door* Clone() const;
	virtual void Initialize(Room*, Room*);

private:
	Room* r1_{};
	Room* r2_{};
};