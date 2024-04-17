#include "DoubleDefenseModifier.h"
#include "Creature.h"

DoubleDefenseModifier::DoubleDefenseModifier(Creature& creature)
	: CreatureModifier(creature)
{
}

void DoubleDefenseModifier::handle()
{
	if (creature_.attack_ < 2) {
		creature_.defense_ *= 2;
	}

	CreatureModifier::handle();
}
