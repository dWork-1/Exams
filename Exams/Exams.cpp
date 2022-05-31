#include <iostream>
#include "getInf.h"

#include<string>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    string name = "Vasya";
    string id = "00000000";
    string exam = "00000000";

    getInf getter;
    getter = getInf("marks.txt");
    cout << getter.get_line();

    system("pause");
    return EXIT_SUCCESS;
}
