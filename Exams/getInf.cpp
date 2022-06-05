#include "getInf.h"
#include <iostream>

using namespace std;

struct out_to_screen
{
public:
	void out_error(int type_error) {
		switch (type_error) {
		case 1:
			cout << "Don`t find or can`t open file" << endl;
		}
	}
};

struct faculty
{
	string id;
	string name;
public:
	string get_id_faculty() {
		return id;
	}
};

struct exam :faculty
{
	int mark;
	string id_exam;
	string name_exam;
public:
	string get_id_exam() {
		return id_exam;
	}
};

getInf::getInf()
{
}

getInf::getInf(string path)
{
	this->path = path;
}

getInf::~getInf()
{
}

bool getInf::get_line(string& exam_line)
{	

	if (open_stream_read()) {
		getline(input, exam_line);
		return true;
	}
		return false;
	
	
}

void getInf::set_exam(string id_student, exam Exam, string id_teacher, int mark)
{
	open_stream_write();
	string exam_line = id_student + Exam.get_id_faculty() + Exam.get_id_exam()+ id_teacher;
	output << endl << exam_line;
}

bool getInf::open_stream_read()
{
	if (!input.is_open()) {
		input.open(path, ios::in | ios::out | ios::binary);
	}
	if (input.fail()) {
		return false;
	}
	return true;
}

void getInf::close_stream_read()
{
	input.close();
}

bool getInf::open_stream_write()
{

	output.open(path, ios::app);
	if (output.fail()) {
		return false;
	}
	return true;
}

void getInf::close_stream_write()
{
	output.close();
}

