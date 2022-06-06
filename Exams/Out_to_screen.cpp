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
		login();
		break;
	case 2:
		new_login();
		break;

	default:
		break;
	}
}