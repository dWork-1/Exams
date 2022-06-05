#pragma once
#include <fstream>
#include <string>
using namespace std;

struct exam;


class getInf
{
	string path;
	ifstream input;
	ofstream output;
public:
	getInf();
	getInf(string);
	~getInf();

	
	//Функция должна вернуть строку из файла 
	bool get_line(string&);
	//Функция для студента добавляет экзамен в файл marks.txt
	void set_exam(string student, exam Examб, string, int);
	//открытие и закрытие базы данных 
	bool open_stream_read();
	void close_stream_read();

	bool open_stream_write();
	void close_stream_write();

	void set_mark();
	
};

