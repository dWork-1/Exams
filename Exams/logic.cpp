#include "logic.h"
#include "getInf.h"
#include "Out_to_screen.h"
#include <sstream>
#include <iostream>

logic::logic()
{
}

void logic::set_type_users(string user)
{
    this->type_users = user;
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

string logic::entered(vector<student>& list)
{
    string text;
    int max = list.size();
    for (int i = 0; i < max;i++ ) {
        int z = list.at(i).get_id().find(type_users);
        if (z>=0) {
            int max_x = list.at(i).get_size_list();
            for (int y = 0; y < max_x; y++) {
                text = list.at(i).get_list(y).get_name_faculty() + " " +to_string( list.at(i).get_list(y).get_mark()) + "\n";
            }

            break;
        }
    }
    return text;
}

string logic::entered_list(vector<student>& list)
{
    int mark=0;
    int place=0;

    string text;
    student man;


    int max = list.size();
    for (int i = 0; i < max; i++) {
        if (list.at(i).get_id() == type_users) {
            man = list.at(i);
            break;
        }
    }

    int max_x = man.get_size_list();
    for (int i = 0; i < max_x; i++) {
        mark = man.get_list(i).get_mark();


        for (int y = 0; y < max; y++) {
            if (list.at(i).get_id() == type_users) {
                continue;
            }

            int size = list.at(y).get_size_list();
            for (int z = 0; z < size; z++) {
                bool first = list.at(i).get_list(z).get_name_faculty() == man.get_list(i).get_name_faculty();
                bool second = list.at(i).get_list(z).get_mark() > man.get_list(i).get_mark();
                if (first && second) {
                    place++;
                }
            }
        }
        if (place < man.get_list(i).get_place()) {
            text = "\t" + man.get_list(i).get_name_faculty() + " : Поступил";
        }
        else {
            text = "\t" + man.get_list(i).get_name_faculty() + " :  Непоступил";
        }
    }


    
    return text;
}




