#pragma once
#include <string>

using namespace std;
class exam
{
	int mark;
	string name;
	string id_faculty;
public:
	exam(string, string);
	exam(string, string, int);

	int get_mark();
	string get_name();
	string get_id();
};

