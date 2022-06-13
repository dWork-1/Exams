#include "logic.h"
#include "getInf.h"
#include "Out_to_screen.h"
#include <sstream>
#include <iostream>

logic::logic()
{
}

user logic::login(const string path, string name)
{
    getInf inf(path);
    
    user man;

    bool flag = true;
    while (flag) {
        string line;
        if (inf.get_line(line)) {
            int a = (int)line.find(name);

            stringstream ss;
            ss << line;

            if (a >= 0) {
                ss >> man;
                return man;
            }
        }
        else {
            flag = false;
        }
    }

    return man;

}

void logic::registration(const string path, string name)
{
    getInf inf(path);
    string id;
    string line;

    id=inf.get_id_new_user();
    
    line = name + " " + "student" + " " + id;

    inf.set_user(line);

}



