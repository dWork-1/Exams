#pragma once
#include <string>

using namespace std;

class Out_to_screen
{
	string user_name;

public:
	Out_to_screen();
	~Out_to_screen();
	void swtch(int a);
	void menu_option();
	void menu_login();
	void menu_new_login();
	void menu_authorization();
	int get_answer();

	// ������� ����� ��� ���������� ����� ������������
	void get_answer(string&);
	//������ ������ ��� user
	string get_user();
};

