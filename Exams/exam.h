#pragma once
#include <string>
#include "teacher.h"
using namespace std;

class exam
{
		int mark;
		string id_exam;
		string name_exam;

		string name_faculty;
		teacher professor;

public:
	void set_id_exam(string id) {
		this->id_exam = id;
	}
		string get_id_exam() {
			return id_exam;
		}

		void set_name_exam(string id) {
			this->id_exam = id;
		}
		string get_name_exam() {
			return id_exam;
		}

		void set_name_faculty(string name) {
			this->name_faculty = name;
		}
		string get_name_faculty() {
			return name_faculty;
		}


		void set_id_teacher(string id) {

		}
		string get_id_teacher() {
			return professor.get_id();
		}

};

