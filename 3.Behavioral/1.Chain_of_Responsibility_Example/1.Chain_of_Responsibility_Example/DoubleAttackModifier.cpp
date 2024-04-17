#include "DoubleAttackModifier.h"
#include "Creature.h"

DoubleAttackModifier::DoubleAttackModifier(Creature& creature) 
	: CreatureModifier(creature)
{
}

void DoubleAttackModifier::handle()
{
	creature_.attack_ += 2;
	CreatureModifier::handle();
}
