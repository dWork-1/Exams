#include "getInf.h"


struct out_to_screen
{
public:
	void out_error(int type_error) {
		switch (type_error) {
		case 1:
			cerr << "Don`t find or can`t open file" << endl;
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

struct exam :fuculty
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

string getInf::get_exam()
{
	string exam_line;
	getline(input, exam_line);
	return exam_line;
}

void getInf::set_exam(string id_student, exam Exam, string id_teacher)
{
	if (input.is_open()) {
		open_stream();
	}
	string exam_line = id_student + Exam.get_id_faculty() + Exam.get_id_exam()+ id_teacher;
	input << endl << exam_line;
}

void getInf::open_stream()
{
	input.open(path);
	if (input.fail()) {
		out_to_screen out;
		out.out_error(1);
	}
}

void getInf::close_stream()
{
	input.close();
}

