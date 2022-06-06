#pragma once
#include "user.h"
#include "getInf.h"
#include <vector>

struct exam;

class student :
    public user
{
   // vector<exam> exams_list;

    getInf reader;

public:
    student(string, string);

    void set_list();
};

