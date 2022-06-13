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
	void menu_exams_list();
	void menu_middle_marks();
	void menu_solution();

	void out_text_to_display(string );

	void menu_user_error();

	// Добавил метод для считывания имени пользователя
	void get_answer(string&);
	//Добали геттер для user
	string get_user();
};

