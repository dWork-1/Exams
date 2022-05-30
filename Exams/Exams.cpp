// Exams.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include "Rating.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

void clear(const string filename);
void get_data_1(const string filename, int& sz, bool& u, int& y);

void Abiturient::show_f(string& s_z) // запись данных в строку
{
    s_z = get_surname() + " " + get_name() + " " + get_patronymic();
}

void Abiturient::show_1(const string filename, const string s_z) // запись данных в файл
{
    ofstream out(filename, ios::app);
    out << s_z << endl;
    out.close();
}

void Rating::task_1(const int sz, const string filename, string& s_z)
{
    string user;
    cin >> user;
    if (user == s_z)
    {
        cout << " Вход успешно выполнен." << endl << endl;
        cout << " Добро пожаловать, " << user << ".\n";
    }
}

void get_data_1(const string filename, int& sz, bool& u, int& y) // подсчет кол-ва строк в файле
{
    char c;
    y = 0;
    u = false;
    ifstream file_in(filename);
    if (file_in)
    {
        y = 1;
        while (!file_in.eof())
        {
            if ((c = file_in.get()) == '\n' || c == 'EOF')
            {
                sz++;
                u = true;
            }
        }
    }
    else
        u = false;

    file_in.close();
    cout << endl;
}


void clear(const string filename) // очистка файла
{
    ofstream file_on(filename);
    file_on.open(filename, ofstream::trunc);
    file_on.close();
}

int menu() {
    system("cls");
    cout << "Добро пожаловать!" << endl;
    cout << "Выберите элемент меню: " << endl;
    cout << "\t1. Зайти в существующий кабинет." << endl;
    cout << "\t2. Добавить нового абитуриента." << endl;
    cout << "\t0 для выхода" << endl;
    cout << "Ваш выбор: ";
    int a = 0;
    cin >> a;
    system("cls");
    return a;
}

int main() {

    setlocale(LC_ALL, "");

    string file = "Файл для хранения данных.txt";
    string username;

    bool u = false;
    int sz = 0, y = 0, value = 0;
    string str;

    //cout << "Введите название файла из которого будет чтение:" << endl;
    //cin >> file;
    get_data_1(file, sz, u, y);
    Rating abiturient(sz);

    unsigned int a = 0;
    do {
        a = menu();
        switch (a)
        {
        case 1:
            cout << " Введите Ваш логин: ";
            // проверка наличия файла
            if ((u == true) && (y == 1))
            {
                abiturient.get_data(file, sz);
                abiturient.task_1(sz, file, str); // проверка на наличие абитуриента в файле
                abiturient.~Rating();
            }
            else if ((y == 1) && (u == false))
            {
                cout << "Ошибка программы..." << endl;
                return 0;
            }

            system("pause");
            break;
        }

    } while (a);
    system("pause");
    return EXIT_SUCCESS;
}