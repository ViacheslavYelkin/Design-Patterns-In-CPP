#pragma once

class Creature;

class CreatureModifier {
public:
	CreatureModifier(Creature& creature);

	void add(CreatureModifier* cm);
	virtual void handle();

protected:
	Creature& creature_;

private:
	CreatureModifier* next_{};
};