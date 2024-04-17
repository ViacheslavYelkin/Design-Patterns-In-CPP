#include "Creature.h"

Creature::Creature(const std::string& name, int attack, int defense)
	: name_{ name }, attack_{ attack }, defense_{defense}
{
}

std::ostream& operator<<(std::ostream& os, const Creature& obj)
{
	os << "Stats of creature \'" << obj.name_
		<< "\' : attack(" << obj.attack_
		<< "), defense(" << obj.defense_ << ")";

	return os;	
}
