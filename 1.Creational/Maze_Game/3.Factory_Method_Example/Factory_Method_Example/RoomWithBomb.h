#pragma once

#include "Room.h"

class RoomWithBomb : public Room {
public:
	RoomWithBomb();
	RoomWithBomb(int n);

	virtual void Enter() override;
};