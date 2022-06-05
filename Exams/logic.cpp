#include "logic.h"
#include "getInf.h"
#include <sstream>
#include <iostream>


struct out_yo_screen {
    public: 
        string out_menu(int i) { system("cls"); system("pause"); cout << "Answer: "; return get_answer(); };
        string get_answer() { system("cls"); system("pause"); string a; std::cin >> a; return a; };
        void out_error(int i){ system("cls"); system("pause"); };
};

logic::logic()
{
}

string logic::login(const string path)
{
    out_yo_screen out;
    string answer=out.out_menu(1);

    getInf inf(path);
    

    bool flag = true;
    while (flag) {

    }
    
}

void logic::registration()
{
}

bool 
