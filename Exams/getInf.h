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

	
	//������� ������ ������� ������ �� ����� 
	bool get_line(string&);
	//������� ��� �������� ��������� ������� � ���� marks.txt
	void set_exam(string student, exam Exam, int);

	void set_mark(string student, exam Exam, int);
	//�������� � �������� ���� ������ 
	bool open_stream_read();
	void close_stream_read();

	bool open_stream_write();
	void close_stream_write();

	void set_user(string);
	string get_id_new_user();


	
};

