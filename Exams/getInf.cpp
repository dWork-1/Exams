#include "getInf.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "Out_to_screen.h"
#include "teacher.h"
#include "exam.h"
using namespace std;

//struct exam 
//{
//	int mark;
//	string id_exam;
//	string name_exam;
//	string id_faculty;
//	string name_faculty;
//	teacher professor;
//
//
//	string get_id_exam() {
//		return id_exam;
//	}
//
//	string get_id_faculty() {
//		return id_faculty;
//	}
//	string get_id_teacher() {
//		return professor.get_id();
//	}
//
//};

getInf::getInf()
{
}

getInf::getInf(string path)
{
	this->path = path;
}

getInf::~getInf()
{
	//List.clear();
}

bool getInf::get_line(string& exam_line)
{	
	if (open_stream_read()) {
		getline(input, exam_line);
		return true;
	}
		return false;
}

void getInf::set_exam(string id_student, exam Exam, int mark)
{


	open_stream_write();
	string exam_line = id_student + Exam.get_id_exam()+ Exam.get_id_teacher() + static_cast<char> (mark);
	output << endl << exam_line;
}

void getInf::set_mark(string student, exam Exam, int mark)
{
	string exam=student + Exam.get_id_exam()+ Exam.get_id_teacher();

	string line;
	while (get_line(line)) {
		if (line.find(exam) >= 0) {
			input.seekp(-1, input.cur);
			char a = static_cast<char>(mark);
			input.put(a);
			input.flush();
		}
		else {
			continue;
		}
	}

}

bool getInf::open_stream_read()
{
	if (!input.is_open()) {
		input.open(path, ios::in | ios::out |ios::binary);
	}
	if (input.eof()) {
		input.close();
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

void getInf::set_user(string line)
{
	open_stream_write();
	output << endl << line;
}

string getInf::get_id_new_user()
{
	open_stream_read();

	string id;
	for (int i = -4; i < 0; i++) {
		
		input.seekp(i, input.end);
		id += input.get();
	}

	int a=stoi(id);
	a++;
	id = to_string(a);
	while (id.length()<4) {
		id = "0" + id;
	}

	return id;

}

