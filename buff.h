//
// Created by Jakub on 26.11.2016.
//

#ifndef SKILLS_BUFF_H
#define SKILLS_BUFF_H


#include "defence.h"

class buff : public defence{
    string statistic;
    int time;
public:
    buff(string stat, int tim, bool self, int mana, string nam, string clas);
    void modify();
    void details();
    void writeFile(fstream &file);
};


#endif //SKILLS_BUFF_H
