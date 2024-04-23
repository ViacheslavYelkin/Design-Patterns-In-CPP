#include "ChatRoom.h"
#include "Person.h"
#include <algorithm>

void ChatRoom::broadcast(const std::string& origin, const std::string& message)
{
	for (auto&& p : people_) {
		if (p->name_ != origin) {
			p->receive(origin, message);
		}
	}
}

void ChatRoom::join(Person* p)
{
	std::string join_message{p->name_ + " joined the room"};
	broadcast("room", join_message);
	p->room_ = this;
	people_.push_back(p);
}

void ChatRoom::message(const std::string& origin, const std::string who, const std::string& message)
{
	Person* target = std::find_if(
		begin(people_), 
		end(people_),
		[&](const Person* p) {
			return p->name_ == who;
		}
		).operator*();

	if (target) {
		target->receive(origin, message);
	}
}
