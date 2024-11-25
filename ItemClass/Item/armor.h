#ifndef ARMOR_H
#define ARMOR_H
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;

//Armor class inherits from Item class
class armor : Item
{
    private:
    string name;
    string type;
    int value;
    int defense;
    public:
    void setName(string name);
    void setType(string type);
    void setValue(int value);
    void setDefense(int defense);
    string getName();
    string getType();
    int getValue(int value);
    int getDefense(int defense);
};

#endif
