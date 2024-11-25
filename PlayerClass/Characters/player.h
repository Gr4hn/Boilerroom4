#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
#include <iostream>

using namespace std;

class Player : Character
{
    private:
        int health;
        int attack;
        int defense;
    public:
        Player(int health, int attack, int defense);
        void setHealth (int health); 
        int getHealth (); 
        void setAttack (int attack); 
        int getAttack (); 
        void setDefense (int defense); 
        int getDefense ();
        void displayInventory ();
        int defend(int damage, int defense, int health);


};

#endif
