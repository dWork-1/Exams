#include "user_test.h"
#include "string"
user_test::user_test()
{
}

user_test::user_test(std::string name, std::string id)
{
	this->name = name;
	this->id = id;
}

void user_test::set_name(std::string name)
{
	this->name = name;
}

std::string user_test::get_name()
{
	return name;
}

void user_test::set_id(std::string id)
{
	this->id = id;
}

std::string user_test::get_id()
{
	return id;
}
