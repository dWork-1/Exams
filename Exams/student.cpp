#include "student.h"
#include <sstream>

student::student()
{
}

student::student(string name, string id):user(name, id)
{

}

void student::set_list( exam ex)
{
	exams_list.push_back(ex);
}

exam student::get_list(int i)
{


	return exams_list.at(i);
}

int student::get_size_list()
{
	return exams_list.size();
}


