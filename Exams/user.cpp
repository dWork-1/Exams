#include "user.h"

user::user(string name, string id)
{
	this->id = id;
	this->name = name;
}

string user::get_name()
{
	return name;
}

string user::get_id()
{
	return id;
}
