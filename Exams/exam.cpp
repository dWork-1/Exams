#include "exam.h"

exam::exam()
{
}

exam::exam(string id, string name)
{
	this->id_faculty = id;
	this->name = name;
}

exam::exam(string id, string name, int mark)
{
	this->id_faculty = id;
	this->name = name;
	this->mark = mark;
}

int exam::get_mark()
{
	return mark;
}

string exam::get_name()
{
	return name;
}

string exam::get_id()
{
	return id_faculty;
}
