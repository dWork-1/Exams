
#include <iostream>
#include "getInf.h"
#include "logic.h"
#include "user.h"
#include <Windows.h>
#include <cstdlib>
#include<string>
#include "Out_to_screen.h"


#pragma execution_character_set("utf-8")


int main()
{
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);

    const string path_users = "users.txt";
    Out_to_screen screen;
    logic brain;
    bool flag = true;

    user user;



    while (flag) {
        screen.swtch(0);
        int answer = screen.get_answer();
        screen.swtch(answer);
        switch (answer)
        {
        case 1:
            user = brain.login(path_users, screen.get_user());
            break;
        case 2:
            brain.registration(path_users, screen.get_user());
            break;
        case 0:
            exit(0);
        default:
            break;
        }
        if (user.get_name().size() != 0) {
            screen.swtch(3);

        }
        else {
            screen.swtch(7);
        }
        system("pause>nul");
        if (user.get_type() != "student") {

            screen.out_text_to_display("� ���������, �� ������ ������, ������������� ������� ��������������\n ����������. ������ �������� �� ����������.\n");
            continue;
        } 
        screen.menu_exams_list();
        screen.menu_middle_marks();
        screen.menu_solution();
    }
 


    return EXIT_SUCCESS;
}

