#pragma once
#include <string>
#include "user.h"
using namespace std;


class logic
{
	string type_users;
public:
	logic();


	user login(const string path, string);
	void registration(const string, string);



};

