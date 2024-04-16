#include <iostream>

#include "User.h"

User::User(const std::string& first_name, const std::string& last_name) 
	: first_name_{ add(first_name) }, last_name_{add(last_name)}
{
}

std::string& User::getFirstName() const
{
	return names_[first_name_];
}

std::string& User::getLastName() const
{
	return names_[last_name_];
}

std::map<size_t, std::string>::iterator User::findValue(const std::string& str)
{
	auto it = names_.begin();
	for (; it != names_.end(); ++it) {
		if (it->second == str) {
			return it;
		}
	}
	it = names_.end();
	return it;
}

size_t User::add(const std::string& str)
{
	auto it = findValue(str);
	if (it == names_.end()) {
		names_[seed_] = str;
		return seed_++;
	}
	return it->first;
}

std::ostream& operator<<(std::ostream& os, const User& obj)
{
	os << "First name: " << obj.getFirstName() << " Last name: " << obj.getLastName() << "("  << obj.last_name_ << ")" << "\n";
	return os;
}
