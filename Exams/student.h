#pragma once
#include "user.h"
#include "getInf.h"
#include <vector>

struct exam;

class student :
    public user
{
    const unsigned int format = 8;
    int num_exam;
   // vector<exam> exams_list;

    getInf reader;

public:
    student(string, string,string);

    void set_list();
};

