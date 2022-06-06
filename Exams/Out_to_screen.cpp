#include "Out_to_screen.h"
#include <iostream>
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
	case 1:
		system("cls");
		login();
		break;
	case 2:
		system("cls");
		new_login();
		break;
	case 3:
		authorization();
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

void Out_to_screen::login()
{
	cout << "\tЧтобы войти в систему, введите Ваш логин." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\tLogin : ";
	cin >> user;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	swtch(3);
}

void Out_to_screen::new_login()
{
	cout << "\tВведите логин нового пользователя." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\tLogin : ";
	cin >> user;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl;
	swtch(3);
}

void Out_to_screen::authorization()
{
	cout << endl;
	cout << "\tВход потвержден." << endl;
	cout << "\tДобро пожаловать, " << user << "." endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;

}
