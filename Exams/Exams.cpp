#include <iostream>
#include "getInf.h"
#include "logic.h"
#include<string>
using namespace std;



int main()
{
    std::cout << "Hello World!\n";
    string name = "Vasya";
    string id = "00000000";
    string exam = "00000000";

    logic logic_p;
    const string path_users = "users.txt";
    cout<<logic_p.login(path_users);

    system("pause");
    return EXIT_SUCCESS;
}
