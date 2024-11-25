#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;

//Weapon class inherits from Item class
class weapon : Item
{
    private:
    string name;
    string type;
    int value;
    int damage;
    int quantity;
    public:
    void setName(string name);
    void setType(string type);
    void setValue(int value);
    void setDamage(int damage);
    void setQuantity(int quantity);
    string getName();
    void getType(int type);
    void getDamage(int damage);
    void getQuantity(int quantity);


};


#endif
