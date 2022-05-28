#pragma once
#include <string>

using namespace std;

class user
{
	string name;
	string id;
public:
	void set_name(string);
	string get_name();
	void set_id(string);
	string get_id();
};

