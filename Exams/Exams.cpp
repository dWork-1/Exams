// Exams.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include<iostream>
#include<string> 
#include<fstream>

using namespace std;
string user; bool a = 0;
int menu();

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
                cout << "Вход подтвержден." << endl;
                cout << "Добро пожаловать, " << str << "." << endl;
                break;
            }
            else if (str != user && !f1.eof())
            {
                continue;
            }
            else
            {
                cerr << "Пользователь не найден." << endl;
                cout << "Хотите добавить нового пользователя?" << endl << "\t1. Да or 0. Нет." << endl;
                cout << "Ваш выбор: ";
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
        cout << "erorr not path" << endl;
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
    cout << " Login:" << endl;
    cin >> user;
    Out_to_screen f("База.txt");
    f.read();
    return 0;
    system("pause");
}

int menu()
{
    cout << " New login:" << endl;
    cin >> user;
    Out_to_screen f("Base.txt");
    f.write_new_user(user, "a");
    f.read();
    return 0;
}