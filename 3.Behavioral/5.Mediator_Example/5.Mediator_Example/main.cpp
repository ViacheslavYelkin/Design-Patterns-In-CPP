#include <iostream>

#include "Person.h"
#include "ChatRoom.h"

int main(int argc, char** argv) {

	ChatRoom room;

	Person bob{ "Bob" };
	Person alice{ "Alice" };

	room.join(&bob);
	room.join(&alice);

	bob.say("Hi there!!");
	alice.say("Hello dear");

	Person petro{ "Petro" };

	room.join(&petro);

	petro.say("Hooray, I've found you!!");

	petro.pm("Bob", "Long time no see, uncle Bob");

	return EXIT_SUCCESS;
}