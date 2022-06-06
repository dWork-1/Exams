
#include <iostream>
#include "getInf.h"
#include "logic.h"

#include<string>
#include "Out_to_screen.h"

int main()
{
    const string path_users = "user.txt";
    Out_to_screen screen;
    logic brain;


    screen.swtch(0);
    int answer = screen.get_answer();
    screen.swtch(answer);
    switch (answer)
    {
    case 1:
        brain.login(path_users);
        break;
    case 2:
        brain.registration();
        break;
    default:
        break;
    }
    screen.menu_authorization();

    return EXIT_SUCCESS;
}

