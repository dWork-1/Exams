#include <iostream>
#include "Student.h"
#include "user.h"
#include<string>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    string name = "Vasya";
    string id = "00000000";
    string exam = "00000000";
    student abitur();
    user at(name, id);
    cout << at.get_name() << endl;

    system("pause");
    return EXIT_SUCCESS;
}
