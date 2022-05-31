#pragma once
#include <string>
#include "getInf.h"

using namespace std;
class exam
{
	int mark;
	string name;
public:
	exam();
	exam(string, string);
	exam(string, string, int);

	int get_mark();
	string get_name();
	string get_id();
};

