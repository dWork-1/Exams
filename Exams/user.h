#pragma once
#include <string>

using namespace std;

class user
{
	string name;
	string id;
public:
	user(string mane, string id);

	string get_name();
	string get_id();
};

