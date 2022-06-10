#include "Out_to_screen.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
Out_to_screen::Out_to_screen()
{
	user_name = "Noname";
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
	cout << "\tÄëÿ âõîäà â ñèñòåìó -> 1." << endl;
	cout << "\tÄëÿ ðåãèñòðàöèè íîâîãî ïîëüçîâàòåëÿ -> 2." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\tÂàø âûáîð : ";
}

void Out_to_screen::menu_login()
{
	cout << "\t×òîáû âîéòè â ñèñòåìó, ââåäèòå Âàø ëîãèí." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\tLogin : ";
	get_answer(user_name);
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
}

void Out_to_screen::menu_new_login()
{
	cout << "\tÂâåäèòå ëîãèí íîâîãî ïîëüçîâàòåëÿ." << endl;
	cout << "\t" << setfill('-') << setw(41) << "-" << endl << endl;
	cout << "\tLogin : ";
	get_answer(user_name);
	cout << "\t" << setfill('-') << setw(41) << "-" << endl;
}

void Out_to_screen::menu_authorization()
{
	cout << endl;
	cout << "\tÄîáðî ïîæàëîâàòü, " << user_name << "."<<endl;
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
	return user_name;
}