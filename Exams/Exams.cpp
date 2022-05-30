#include <iostream>
#include "Student.h"
#include "get.h"
#include<string>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    string name = "Vasya";
    string id = "00000000";
    string exam = "00000000";
    student abitur();

    getter inf("marks.txt");
    int mark = 0;//inf.get_mark(id, exam);
    cout << mark<< endl;


    inf.close_stream();
    system("pause");
    return EXIT_SUCCESS;
}
