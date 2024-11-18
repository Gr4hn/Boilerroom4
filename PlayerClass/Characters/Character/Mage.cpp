#include "Mage.h"

Mage::Mage(int health, int attack, int defense) : Player(health, attack, defense)
{
    this->health = health;
    this->attack = attack;
    this->defense = defense;
}
void Mage::setHealth (int health)
{
    health = 100;
}
int Mage::getHealth ()
{
    return health;
}
void Mage::setAttack (int attack) 
{
    attack = 20;
}
int Mage::getAttack ()
{
    return attack;
}
void Mage::setDefense (int defense)
{
    defense = 5;
}
int Mage::getDefense ()
{
    return defense;
}