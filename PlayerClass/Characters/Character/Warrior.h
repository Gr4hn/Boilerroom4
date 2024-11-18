#ifndef Warrior_H
#define Warrior_H
#include "../player.h"
#include <iostream>

using namespace std;

class Warrior : Player
{
    private:
        int health;
        int attack;
        int defense;
    public:
        Warrior(int health, int attack, int defense);
        void setHealth (int health); 
        int getHealth (); 
        void setAttack (int attack); 
        int getAttack (); 
        void setDefense (int defense); 
        int getDefense ();
};

#endif
