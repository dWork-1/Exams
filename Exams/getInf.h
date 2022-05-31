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
	//������� ������ ������� ������ �� ����� 
	string get_exam();
	//������� ��� �������� ��������� ������� � ���� marks.txt
	void set_exam(string student, exam Exam);
	//�������� � �������� ���� ������ 
	void open_stream();
	void close_stream();

	//��������� ������ ��� ��������(�������������)
	void set_mark_to_database(int mark, exam Exam, string student);


	
};

