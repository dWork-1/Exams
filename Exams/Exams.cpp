#include <iostream>
#include "student.h"
#include<string>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    string name = "Vasya";
    string id = "00000000";
    string exam = "00000000";

    student abitur(name, id);

    cout << abitur.get_name() << endl;

    system("pause");
    return EXIT_SUCCESS;
}
