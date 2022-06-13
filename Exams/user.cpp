#include "user.h"

user::user(string name, string id)
{
	this->id = id;
	this->name = name;
}

user::user()
{
}

void user::set_type(string type)
{
	this->type = type;
}

void user::set_name(string name)
{
	this->name = name;
}

void user::set_id(string)
{
	this->id = id;
}

string user::get_type()
{
	return type;
}

string user::get_name()
{
	return name;
}

string user::get_id()
{
	return id;
}

istream& operator>>(stringstream& ss, user& man)
{
	return ss >> man.name >> man.type >> man.id;
}

