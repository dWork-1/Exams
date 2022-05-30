#include "student.h"
#include <sstream>

student::student(string name, string id, string path):user(name, id)
{

}

void student::set_list()
{
	string id_student = get_id();

	string exam_student = reader.get_exam();
	if (exam_student.find(id_student)==0) {
		num_exam++;
		string id_faculty, name;
		int mark;

		stringstream ss;
		ss << exam_student;
		ss >> id_student >> id_faculty >> name>>mark;

		exam exam1;
		if (ss.fail()) {
			exam1= exam(id_faculty, name);
		}
		else {
			exam1= exam(id_faculty, name, mark);
		}
		exams_list.push_back(exam1);
	}
}
