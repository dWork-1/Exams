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
	cout << "\t��� ����� � ������� -> 1." << endl;
	cout << "\t��� ����������� ������ ������������ -> 2." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\t��� ����� : ";
}

void Out_to_screen::login()
{
	cout << "\t����� ����� � �������, ������� ��� �����." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\tLogin : ";
	cin >> user;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	swtch(3);
}

void Out_to_screen::new_login()
{
	cout << "\t������� ����� ������ ������������." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\tLogin : ";
	cin >> user;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl;
	swtch(3);
}

void Out_to_screen::authorization()
{
	cout << endl;
	cout << "\t���� ����������." << endl;
	cout << "\t����� ����������, " << user << "." endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;

}
