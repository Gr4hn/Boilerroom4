#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>

using namespace std;

class Character
{
private:
    string name;
    int health;
    int attack;
    int defense;
public:
    Character(string name, int health, int attack, int defense);
    virtual ~Character();

    void setHealth(int health);
    int getHealth() const;
    void setAttack(int attack);
    int getAttack() const;
    void setDefense(int defense);
    int getDefense() const;
    void setName(string name);
    string getName() const;

    virtual int attackCharacter(Character& character);
};


#endif