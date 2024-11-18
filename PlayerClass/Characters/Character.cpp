#include "Character.h"

Character::Character(int health, int attack, int defense)
{
    this->health = health;
    this->attack = attack;
    this->defense = defense;
}
void Character::setHealth (int health) 
{
    health = 100;
}
int Character::getHealth ()
{
    return health;
}
void Character::setAttack (int attack) 
{
    attack = 10;
}
int Character::getAttack ()
{
    return attack;
}
void Character::setDefense (int defense)
{
    defense = 5;
}
int Character::getDefense ()
{
    return defense;
}