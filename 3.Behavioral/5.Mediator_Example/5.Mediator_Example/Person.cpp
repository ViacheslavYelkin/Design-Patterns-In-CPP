#include "Person.h"
#include "ChatRoom.h"
#include <iostream>

Person::Person(const std::string& name) 
	: name_{name}
{
}

void Person::say(const std::string& message) const
{
	room_->broadcast(name_, message);
}

void Person::pm(const std::string& who, const std::string& message) const
{
	room_->message(name_, who, message);
}

void Person::receive(const std::string& origin, const std::string& message)
{
	std::string ms{ origin + ": \"" + message + '\"' };
	std::cout << "[" << name_ << "'s session]: " << ms << '\n';
	chat_log_.push_back(ms);
}
