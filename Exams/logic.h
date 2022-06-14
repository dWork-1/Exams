#pragma once
#include <string>
#include <vector>
#include "student.h"
#include "user.h"
using namespace std;


class logic
{
	string type_users;
public:
	logic();
	void set_type_users(string);

	user login(const string path, string);
	void registration(const string, string);

	string entered(vector<student>&);
	string entered_list(vector<student>&);


};

