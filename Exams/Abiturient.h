#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Abiturient {
private:
    string surname;
    string name;
    string patronymic;
public:
    Abiturient() // конструктор
    {
        surname = "nosurname";
        name = "noname";
        patronymic = "nopatronymic";
    }
    Abiturient(string sn, string n, string p) // перегруженный конструктор
    {
        surname = sn;
        name = n;
        patronymic = p;
    }
    ~Abiturient() { } // деструктор
    void set_st(string sn, string n, string p)
    {
        surname = sn;
        name = n;
        patronymic = p;
    }
    const string& get_surname() const
    {
        return surname;
    }

    const string& get_name() const
    {
        return name;
    }

    const string& get_patronymic() const
    {
        return patronymic;
    }

    void show()
    {
        cout << surname << " " << name << " " << patronymic << endl;
    }
    void show_f(string& s_z);
    void show_1(const string filename, const string sz);
};