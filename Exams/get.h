#pragma once
#include <fstream>
#include <string>
using namespace std;
class getter
{
	bool status;
	string path;
	ifstream input;
public:
	getter(string);
	void close_stream();


};

