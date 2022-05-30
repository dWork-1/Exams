// Exams.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Abiturient
{
private:
    class Rating
    {
    public:
        Rating() // конструктор
        {
            sz_students = 0;
            students = nullptr;
        }
        Rating(int sz) // перегруженный конструктор
        {
            sz_students = sz;
            students = new Abiturient[sz];
        }
        ~Rating() { } // деструктор
        void task_1(const int sz, const string filename, string& s_z);
        void get_data(const string filename, const int sz) // чтение и запись из файла
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

//---------------------------------------------------------------------//

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

void Abiturient::Rating::task_1(const int sz, const string filename, string& s_z)
{
    string user;
    cin >> user;
    if (user == s_z)
    {
        cout << " Вход успешно выполнен." << endl << endl;
        cout << " Добро пожаловать, " << user << ".\n";
    }
}

//void Abiturient::Rating::task_2(const int sz, const string filename, string& s_z, const int limit)
//{
//    int n = 0, sum = 0, index = 0, k = 0;
//    cout << "Список абитуриентов, сумма который не меньше " << limit << " : " << endl;
//    for (int i = 0; i < sz; i++)
//    {
//        for (int j = 0; j < 19; j++)
//        {
//            // находим сумму оценок абитуриента
//            if (students[i].get_rating()[j] != ',' && (j == 0 || students[i].get_rating()[j - 1] == ','))
//            {
//                sum += (students[i].get_rating()[j] - '0');
//                //cout << sum << "\t";
//            }
//            else if (students[i].get_rating()[j] == ',') index = j + 1;
//        }
//        if (sum >= limit)  // поиск абитуринтов, сумма которых нам подходит по условию
//        {
//            cout << k + 1 << ". ";
//            students[i].show();
//            students[i].show_f(s_z);
//            students[i].show_1(filename, s_z);
//            n++; k++;
//            cout << endl;
//        }
//        sum = 0;
//    }
//    if (n == 0) { cout << "Абитуриентов не найдено." << endl; }
//
//}
//void Rating::task_3(const int sz, const string filename, string& s_z, const int limit)
//{
//    int n = 0, sum = 0, index = 0, k = 0;
//    cout << "Список абитуриентов, имеющих полупроходной балл и выше: " << endl;
//    for (int i = 0; i < sz; i++)
//    {
//        for (int j = 0; j < 19; j++)
//        {
//            // аналогично
//            if (students[i].get_rating()[j] != ',' && (j == 0 || students[i].get_rating()[j - 1] == ','))
//            {
//                sum += (students[i].get_rating()[j] - '0');
//                //cout << sum << "\t";
//
//            }
//            else if (students[i].get_rating()[j] == ',') index = j + 1;
//            if (sum >= limit / 2) // поиск абитуриентов с полупроходным и выше баллом
//            {
//                cout << k + 1 << ". ";
//                students[i].show();
//                students[i].show_f(s_z);
//                students[i].show_1(filename, s_z);
//                n++; k++;
//                break;
//                cout << endl;
//            }
//        }
//        sum = 0;
//    }
//    if (n == 0) { cout << "Абитуриентов не найдено." << endl; }
//    cout << "Найдено " << k << " абитуриентов." << endl;
//}


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

    string file ="Файл для хранения данных.txt";
    string username;

    bool u = false;
    int sz = 0, y = 0, value = 0;
    string str;

    //cout << "Введите название файла из которого будет чтение:" << endl;
    //cin >> file;
    get_data_1(file, sz, u, y);
    Abiturient::Rating abiturient(sz);

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
                cout << "Ошибка программы..." <<  endl;
                return 0;
            }

            system("pause");
            break;
        }

    } while (a);
    system("pause");
    return EXIT_SUCCESS;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
