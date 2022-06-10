#include "logic.h"
#include "getInf.h"
#include "Out_to_screen.h"
#include <sstream>
#include <iostream>

logic::logic()
{
}

string logic::login(const string path, string name)
{
    getInf inf(path);
    

    bool flag = true;
    while (flag) {
        string line;
        if (inf.get_line(line)) {

            if (line.find(name) >= 0) {
                return line;
            }
        }
        else {
            return "";
        }
    }



    
}

void logic::registration(const string path)
{



}
