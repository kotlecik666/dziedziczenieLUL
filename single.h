//
// Created by Jakub on 26.11.2016.
//

#ifndef SKILLS_SINGLE_H
#define SKILLS_SINGLE_H


#include "damage.h"

class single : public damage{
protected:
    string type;
public:
    single(string typ, int dmg, int targ, int mana, string nam, string clas);
    void modify();
    void details();
    void writeFile(fstream &file);
};


#endif //SKILLS_SINGLE_H
