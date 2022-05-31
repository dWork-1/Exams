#pragma once
#include <fstream>
#include <string>
#include "exam.h"

using namespace std;

class getInf
{
	string path;
	ifstream input;
public:
	getInf();
	getInf(string);
	~getInf();
	//Функция должна вернуть строку из файла 
	string get_exam();
	//Функция для студента добавляет экзамен в файл marks.txt
	void set_exam(string student, exam Exam);
	//открытие и закрытие базы данных 
	void open_stream();
	void close_stream();

	//Добавляет оценку для экзамена(преподаватель)
	void set_mark_to_database(int mark, exam Exam, string student);


	
};

