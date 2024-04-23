#pragma once

#include <string>
#include <vector>

struct ChatRoom;

struct Person {

	std::string name_{};
	ChatRoom* room_{};
	std::vector<std::string> chat_log_{};

	Person(const std::string& name);

	void say(const std::string&  message) const;
	void pm(const std::string& who, const std::string& message) const;
	void receive(const std::string& origin, const std::string& message);


};