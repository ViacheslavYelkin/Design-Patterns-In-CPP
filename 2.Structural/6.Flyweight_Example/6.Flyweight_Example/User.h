#pragma once

#include <string>
#include <map>


class User {
public:

	friend std::ostream& operator<<(std::ostream& os, const User& obj);

	User(const std::string& first_name, const std::string& last_name);

	std::string& getFirstName() const;	
	std::string& getLastName() const;

	size_t first_name_{}, last_name_{};

private:

	inline static std::map<size_t, std::string> names_{};
	inline static size_t seed_{};

	static std::map<size_t, std::string>::iterator findValue(const std::string& str);
	static size_t add(const std::string& str);

};


