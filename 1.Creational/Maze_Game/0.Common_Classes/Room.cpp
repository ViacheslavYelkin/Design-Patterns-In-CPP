#include <iostream>

#include "Room.h"

Room::Room()
{
}

Room::Room(int n)
{
	std::cout << "----------------------\nCreating simple room\n";
}

void Room::SetSide(EDirection direction, IMapSite* side)
{
}

void Room::GetSide() const
{
}

int Room::GetRoomNumber()
{
	return room_no_;
}

void Room::Enter()
{
}

Room* Room::Clone() const
{
	return new Room(*this);
}

void Room::Initialize(int no)
{
	room_no_ = no;
}
