#pragma once
#include <fstream>
#include <string>
using namespace std;

struct exam;


class getInf
{
	string path;
	fstream input;
	fstream output;
public:
	getInf();
	getInf(string);
	~getInf();

	
	//������� ������ ������� ������ �� ����� 
	bool get_line(string&);
	//������� ��� �������� ��������� ������� � ���� marks.txt
	void set_exam(string student, exam Exam�, string, int);

	void set_mark(string student, exam Exam�, string, int);
	//�������� � �������� ���� ������ 
	bool open_stream_read();
	void close_stream_read();

	bool open_stream_write();
	void close_stream_write();

	void set_mark();
	
};

