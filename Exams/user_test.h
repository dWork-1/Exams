#pragma once
#include <string>

class user_test
{
	std::string name;
	std::string id;
public:
	user_test();
	user_test(std::string, std::string);
	void set_name(std::string);
	std::string get_name();
	void set_id(std::string);
	std::string get_id();
};

