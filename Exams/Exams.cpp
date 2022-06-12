
#include <iostream>
#include "getInf.h"
#include "logic.h"

#include <Windows.h>

#include<string>
#include "Out_to_screen.h"

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const string path_users = "users.txt";
    Out_to_screen screen;
    logic brain;
    bool flag = true;

    string user="";

    while (flag) {
        screen.swtch(0);
        int answer = screen.get_answer();
        screen.swtch(answer);
        switch (answer)
        {
        case 1:
            user=brain.login(path_users, screen.get_user());
            cout << endl << user << endl;
            break;
        case 2:
            brain.registration(path_users, screen.get_user());
            break;
        default:
            break;
        }
        if (user.size() != 0) {
            screen.swtch(3);
            
        }
        else {
            //��� ������� ����� ����� ������� ���������,��� �� ����� ������ ������������ � ����
            //����������������� ��� ���������� ������ �����.
        }
        system("pause>nul");
    }

    if (user.find("student")>0) {
        screen.swtch();
    }

    return EXIT_SUCCESS;
}

