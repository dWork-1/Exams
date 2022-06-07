#include "logic.h"
#include "getInf.h"
#include ""
#include <sstream>
#include <iostream>

logic::logic()
{
}

string logic::login(const string path)
{
    out_to_screen out;
    string answer=out.out_menu(1);

    getInf inf(path);
    

    bool flag = true;
    while (flag) {
        string line;
        if (inf.get_line(line)) {

            if (line.find(answer) >= 0) {
                return line;



                flag = false;
            }
            break;
        }
    }


    
}

void logic::registration()
{
}
