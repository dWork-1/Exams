#pragma once
#include <string>
#include <sstream>

using namespace std;

class user
{
	string name;
	string id;
	string type;
public:
	user(string mane, string id);
	user();

	void set_type(string);
	void set_name(string);
	void set_id(string);


	string get_type();
	string get_name();
	string get_id();

	friend istream& operator >>(stringstream&, user&);
};

