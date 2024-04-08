#pragma once

#include "Room.h"

class EnchantedRoom : public Room {

public:
	EnchantedRoom();
	EnchantedRoom(int n);

private:
	int room_no_{};
};