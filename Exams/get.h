#pragma once
#include <fstream>
#include <string>
using namespace std;
class get
{
	bool status;
	string path;
	ifstream input;
public:
	get(string);
	void close_stream();


};

