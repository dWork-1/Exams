#pragma once
#include "user.h"
#include "getInf.h"
#include <vector>

using namespace std;

struct exam;

class student :
    public user
{
    int col_exam;
    vector<exam> exams_list;

public:
    student(string, string);

    void set_list();
};

