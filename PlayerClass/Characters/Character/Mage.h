#ifndef Mage_H
#define Mage_H
#include "../player.h"
#include <iostream>

using namespace std;

class Mage : Player
{
    private:
        int health;
        int attack;
        int defense;
    public:
        Mage(int health, int attack, int defense);
        void setHealth (int health); 
        int getHealth (); 
        void setAttack (int attack); 
        int getAttack (); 
        void setDefense (int defense); 
        int getDefense ();
};

#endif
