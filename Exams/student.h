#pragma once
#include "user.h"
#include "getInf.h"
#include "exam.h"
#include <vector>

using namespace std;


class student :
    public user
{
    int col_exam;
    vector<exam> exams_list;

public:
    student(string, string);

    void set_list();
};

