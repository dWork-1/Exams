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
	//������� ������ ������� ������ �� ����� 
	string get_line();
	//������� ��� �������� ��������� ������� � ���� marks.txt
	void set_exam(string student, exam Exam�, string);
	//�������� � �������� ���� ������ 
	bool open_stream_read();
	void close_stream_read();

	bool open_stream_write();
	void close_stream_write();
	//��������� ������ ��� ��������(�������������)
	void set_mark_to_database(int mark, exam Exam, string student);


	
};

