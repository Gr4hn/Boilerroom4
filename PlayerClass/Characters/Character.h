#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

using namespace std;

class Character
{
    private:
    int health;
    int attack;
    int defense;
    public:
    Character(int health, int attack, int defense);
    void setHealth (int health); 
    int getHealth (); 
    void setAttack (int attack); 
    int getAttack (); 
    void setDefense (int defense); 
    int getDefense (); 
};

#endif