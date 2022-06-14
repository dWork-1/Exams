
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
    const string path_mark = "marks.txt";
    Out_to_screen screen;
    logic brain;
    getInf file_user(path_users);
    getInf file_mark(path_mark);

    bool flag = true;

    user user;

    vector<student> list;

    string line;

    while (file_user.get_line(line)) {
        stringstream ss;
        student man;
        ss << line;
        ss >> man;
        while (file_mark.get_line(line)) {
            int i = line.find(man.get_id());
            if (i >= 0) {
                stringstream sss;
                exam ex;
                ss << line;
                ss >> ex;
                man.set_list(ex);
            }
        }
        list.push_back(man);
    }


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

        brain.set_type_users(user.get_id());
        system("cls");
        screen.menu_exams_list(brain.entered(list));
        screen.menu_middle_marks();
        screen.menu_solution(brain.entered_list(list));
        system("pause>nul");
    }
 


    return EXIT_SUCCESS;
}

