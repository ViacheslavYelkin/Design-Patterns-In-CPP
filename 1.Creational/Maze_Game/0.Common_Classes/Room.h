#pragma once

#include "MapSite.h"
#include "Direction.h"

class Room : public IMapSite{

public:
	Room();
	Room(int n);

	void SetSide(EDirection, IMapSite*);
	void GetSide() const;
	int GetRoomNumber();
	virtual void Enter() override;


private:
	int room_no_{};
};