//
// Created by Jakub on 25.11.2016.
//

#ifndef SKILLS_RANGED_H
#define SKILLS_RANGED_H


#include "phys.h"

class ranged : public phys{
    int range;
    string ammo;
public:
    ranged(int rng, string amm, int dmg, string nam, string clas);
    void modify();
    void details();
    void writeFile(fstream &file);
};


#endif //SKILLS_RANGED_H
