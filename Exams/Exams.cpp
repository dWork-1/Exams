#include<iostream>
#include<string>
#include<iomanip>
#include "Out_to_screen.h"

using namespace std;
Out_to_screen User;
string str = "";

int menu_option()
{
    setlocale(LC_ALL, "ru");
    cout << endl;
    cout << "\tДля входа в систему -> 1." << endl;
    cout << "\tДля регистрации нового пользователя -> 2." << endl;
    cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
    cout << "\tВаш выбор : ";
    Out_to_screen selected;
    int a = 0;
    cin >> a;
    selected.swtch(a);
    return a;
}
//int main_option()
//{
//    int a = 0;
//    do {
//        a = menu_option();
//        switch (a)
//        {
//        case 1:
//            menu_login();
//            system("pause");
//            break;
//        case 2:
//
//            system("pause");
//            break;
//        case 3:
//            
//            system("pause");
//            break;
//        }
//
//    } while (a);
//    system("pause");
//    return 0;
//}

//int new_user()
//{
//    cout << "\tNew login : ";
//    cin >> User;
//    cout << "\t" << setfill('-') << setw(41) << "-" << endl;
//}


int menu_login()
{
    cout << "\tЧтобы войти в систему, введите Ваш логин." << endl;
    cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
    cout << "\tLogin : ";
    cin >> str;
    cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
    return 0;
}