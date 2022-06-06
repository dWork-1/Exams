#include "Out_to_screen.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Out_to_screen::Out_to_screen()
{
	user = "Noname";
}

Out_to_screen::~Out_to_screen() { }


void Out_to_screen::swtch(int a)
{
	switch (a)
	{
	case 0:
		system("cls");
		menu_option();
		break;
	case 1:
		system("cls");
		menu_login();
		break;
	case 2:
		system("cls");
		menu_new_login();
		break;
	case 3:
		menu_authorization();
		break;
	default:
		break;
	}
}

void Out_to_screen::menu_option()
{
	cout << "\tДля входа в систему -> 1." << endl;
	cout << "\tДля регистрации нового пользователя -> 2." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\tВаш выбор : ";
}

void Out_to_screen::menu_login()
{
	cout << "\tЧтобы войти в систему, введите Ваш логин." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\tLogin : ";
	get_answer(user);
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
}

void Out_to_screen::menu_new_login()
{
	cout << "\tВведите логин нового пользователя." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\tLogin : ";
	get_answer(user);
	cout << "\t" << setfill('-') << setw(41) << "-" << endl;
}

void Out_to_screen::menu_authorization()
{
	cout << endl;
	cout << "\tВход потвержден." << endl;
	cout << "\tДобро пожаловать, " << user << "."<<endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;

}

int Out_to_screen::get_answer()
{
	unsigned int a;
	cin >> a;
	if (cin.fail()) 
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return -1;
	}
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return a;
}


void Out_to_screen::get_answer(string& a)
{
	getline(cin, a);
	return ;
}
string Out_to_screen::get_user()
{
	return user;
}