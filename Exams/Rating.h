#pragma once
#include "Abiturient.h"

class Rating {
public:
    Rating() // �����������
    {
        sz_students = 0;
        students = nullptr;
    }
    Rating(int sz) // ������������� �����������
    {
        sz_students = sz;
        students = new Abiturient[sz];
    }
    ~Rating() { } // ����������
    void task_1(const int sz, const string filename, string& s_z);
    void get_data(const string filename, const int sz) // ������ � ������ �� �����
    {
        ifstream file_in(filename);
        string surname, name, patronymic;
        for (int i = 0; i < sz; i++)
        {
            file_in >> surname >> name >> patronymic;
            students[i].set_st(surname, name, patronymic);
            students[i].show();

        }
        file_in.close();
    };
private:
    Abiturient* students;
    int sz_students;
};