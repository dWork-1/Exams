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
	//Функция должна вернуть строку из файла marks.txt
	string get_exam();
};

