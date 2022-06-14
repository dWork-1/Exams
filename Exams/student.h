#pragma once
#include "user.h"
#include "getInf.h"
#include "exam.h"
#include <vector>

using namespace std;


class student :
    public user
{
    int col_exam=0;
    vector<exam> exams_list;

public:
    student();
    student(string, string);

    void set_list(exam);
    exam get_list(int);
    int get_size_list();
};

