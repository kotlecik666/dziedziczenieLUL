//
// Created by Jakub on 26.11.2016.
//

#ifndef SKILLS_AOE_H
#define SKILLS_AOE_H


#include "damage.h"

class aoe : public damage{
    int radius;
public:
    aoe(int rad, int dmg, int targ, int mana, string nam, string clas);
    void modify();
    void details();
    void writeFile(fstream &file);
};


#endif //SKILLS_AOE_H
