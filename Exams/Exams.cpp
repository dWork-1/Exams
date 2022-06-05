// Exams.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include<iostream>
#include<string> 
#include<fstream>
#include<iomanip>
#include<windows.h>

using namespace std;
string user; bool a = 0;
int menu();
int marks();

void write_file(string* path1, string value)
{
    fstream f1;
    {
        f1.open(*path1, fstream::in | fstream::out);
        f1 << value << "\n";
    }
    f1.close();
};
void write_file(string* path1, string value, string value2)
{
    fstream f1;
    {
        f1.open(*path1, fstream::in | fstream::out | fstream::app);
        f1 << value << "\n";
    }
    f1.close();
};
void read_file(string* path1)
{
    fstream f1;
    {
        f1.open(*path1, fstream::in);
        while (!f1.eof())
        {
            string str = "";
            getline(f1, str);
            if (str == user)
            {
                Sleep(1000);
                cout << endl;
                cout << "\tВход подтвержден." << endl << endl;
                cout << "\tДобро пожаловать, " << str << "." << endl << endl;
                break;
            }
            else if (str != user && !f1.eof())
            {
                continue;
            }
            else
            {
                Sleep(1000);
                cerr << "\tПользователь не найден." << endl << endl;
                cout << "\tХотите добавить нового пользователя?" << endl << "\t1. Да or 0. Нет." << endl;
                cout << "\tВаш выбор: ";
                cin >> a;
                if (a == 1)
                {
                    system("cls");
                    menu();
                }
                break;
            }
        }
    }
    f1.close();
};

class Out_to_screen {
public:
    string path; string path1;
    Out_to_screen()
    {
        cout << "Erorr." << endl;
    }
    Out_to_screen(string path)
    {
        path1 = path;
        fstream f;
        {
            f.open(path, fstream::in | fstream::out);
            if (f.is_open())
            {

            }
        }
        f.close();;
    }
    void write_new_user(string value)
    {
        write_file(&path1, value);
    }
    void write_new_user(string value, string value2)
    {
        if (value2 == "a")
        {
            fstream f2;
            write_file(&path1, value, value2);
        }
        else
        {
            cout << "Error." << endl;
        }
    }
    void read()
    {
        read_file(&path1);
    }
};
int main() //главное меню (пользователь ( + ср.балл + предмет + прошел \ не прошел))
{
    setlocale(LC_ALL, "ru");
    cout << endl;
    cout << "\tЧтобы войти в систему, введите Ваш логин." << endl;
    cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
    cout << "\tLogin : ";
    cin >> user;
    cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
    Out_to_screen f("База.txt");
    f.read();
    marks();
    return 0;
}

int menu()
{
    cout << "\tNew login : ";
    cin >> user;
    cout << "\t" << setfill('-') << setw(41) << "-" << endl;
    Out_to_screen f("Base.txt");
    f.write_new_user(user, "a");
    f.read();
    return 0;
}

int marks()//должна быть проверка: учитель\студент
{
    ifstream d("TestMarks.txt");
    const int N = 3; // количество оценок для подсчета
    int m[N] = { 0 };
    double summ = 0; // Сумма элементов списка
    int i = 0;
    while (!d.eof())
    {
        d >> m[i];
        summ += m[i];
        i++;
    }

    double Mark = summ / N;
    cout << "\t" << Mark;

    return 0;
}