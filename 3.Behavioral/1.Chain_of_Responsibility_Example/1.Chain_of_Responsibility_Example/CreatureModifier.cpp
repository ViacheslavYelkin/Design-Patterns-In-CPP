#include "CreatureModifier.h"

CreatureModifier::CreatureModifier(Creature& creature) 
	: creature_{creature}
{
}

void CreatureModifier::add(CreatureModifier* cm)
{
	if (next_) {
		next_->add(cm);
	}
	else {
		next_ = cm;
	}
}

void CreatureModifier::handle()
{
	if (next_) {
		next_->handle();
	}
}
