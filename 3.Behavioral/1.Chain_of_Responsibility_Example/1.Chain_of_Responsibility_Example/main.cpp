#include <iostream>

#include "Creature.h"
#include "CreatureModifier.h"
#include "DoubleDefenseModifier.h"
#include "DoubleAttackModifier.h"

int main(int argc, char** argv) {

	Creature baby_orc{ "Baby Orc", 1, 1 };

	CreatureModifier root{baby_orc};

	DoubleAttackModifier atck_mod{ baby_orc };
	DoubleDefenseModifier def_mod{ baby_orc };

	root.add(&def_mod);
	root.add(&atck_mod);

	root.handle();

	std::cout << baby_orc;

	return EXIT_SUCCESS;
}