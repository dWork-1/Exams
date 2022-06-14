#pragma once
#include <string>
#include "teacher.h"
using namespace std;

class exam
{
		int mark;
		int place;
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

		void set_place(int id) {
			this->place = id;
		}
		int get_place() {
			return place;
		}


		void set_mark(int id) {
			this->mark = id;
		}
		int get_mark() {
			return mark;
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
			professor.set_id(id);
		}
		string get_id_teacher() {
			return professor.get_id();
		}

		friend istream& operator >>(stringstream&, exam&);

};

