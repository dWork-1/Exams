#pragma once
#include <string>
class Out_to_screen
{
	string user;

public:
	Out_to_screen();
	~Out_to_screen();
	void swtch(int a);
	void menu_option();
	void menu_login();
	void menu_new_login();
	void menu_authorization();
	int get_answer();

	// Добавил метод для считывания имени пользователя
	void get_answer(string&);
	//Добали геттер для user
	string get_user();
};

