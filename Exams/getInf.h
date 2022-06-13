#pragma once
#include <fstream>
#include <string>
#include "student.h"
#include "exam.h"
#include <vector>

using namespace std;


class getInf
{
	string path;
	fstream input;
	fstream output;

	//vector<student> list;
public:
	getInf();
	getInf(string);
	~getInf();

	
	//Функция должна вернуть строку из файла 
	bool get_line(string&);
	//Функция для студента добавляет экзамен в файл marks.txt
	void set_exam(string student, exam Examб, int);

	void set_mark(string student, exam Examб, int);
	//открытие и закрытие базы данных 
	bool open_stream_read();
	void close_stream_read();

	bool open_stream_write();
	void close_stream_write();

	void set_user(string);
	string get_id_new_user();


	
};

