#pragma once
#include "user.h"
#include "exam.h"
class student :
    public user
{
    int num_exam;
    exam* exams_list;
public:
    student(string, string);

    void set_list();
};

