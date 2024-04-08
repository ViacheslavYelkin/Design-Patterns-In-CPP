#include "MazeFactory.h"

MazeFactory* MazeFactory::Instance()
{
	if (!instance_) {
		instance_ = new MazeFactory;
	}

	return instance_;
}

MazeFactory::MazeFactory()
{
}
