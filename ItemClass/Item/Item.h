#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>

using namespace std;

class Item
{
    private:
    string name;
    string category;
    string description;
    int quantity;
    int value;
    int health;
    int damage;
    
    public:
    void setName(string name);
    string getName();
    void setCategory(string category);
    string getCategory();
    void setDescription(string description);
    string getDescription();
    void setValue(int value);
    int getValue();
    void setHealth(int health);
    int getHealth();
    void setDamage(int damage);
    int getDamage();
    void setQuantity(int quantity);
    int getQuantity();

};

#endif