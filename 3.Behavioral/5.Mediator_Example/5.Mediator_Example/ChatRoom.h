#pragma once

#include <string>
#include <vector>

struct Person;

struct ChatRoom {

	std::vector<Person*> people_{};

	void broadcast(const std::string& origin, const std::string& message);
	void join(Person* p);
	void message(const std::string& origin, const std::string who, const std::string& message);
};