#pragma once
#include <string>

using namespace std;

class teacher
{
	string id;
	string name;
public:
	void set_id(string);
	void set_name(string);

	string get_id();
	string get_name();
};

