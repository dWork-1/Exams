#pragma once
#include <fstream>
#include <string>

using namespace std;

class getInf
{
	string path;
	ifstream input;
public:
	getInf();
	getInf(string);
	~getInf();
	//������� ������ ������� ������ �� ����� marks.txt
	string get_exam();
};

