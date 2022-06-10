#pragma once
#include <string>
using namespace std;


class logic
{
	string type_users;
public:
	logic();


	string login(const string path, string);
	void registration(const string);

};

