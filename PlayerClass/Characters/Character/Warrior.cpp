#include "Warrior.h"

Warrior::Warrior(int health, int attack, int defense) : Player(health, attack, defense)
{
    this->health = health;
    this->attack = attack;
    this->defense = defense;
}
void Warrior::setHealth (int health)
{
    health = 125;
}
int Warrior::getHealth ()
{
    return health;
}
void Warrior::setAttack (int attack) 
{
    attack = 10;
}
int Warrior::getAttack ()
{
    return attack;
}
void Warrior::setDefense (int defense)
{
    defense = 15;
}
int Warrior::getDefense ()
{
    return defense;
}