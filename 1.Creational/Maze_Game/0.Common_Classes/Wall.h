#pragma once

#include "MapSite.h"

class Wall : public IMapSite {

public:
	Wall();

	virtual void Enter() override;
	virtual Wall* Clone() const;


};