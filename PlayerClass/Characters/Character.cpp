#include "Character.h"

Character::Character(string name, int health, int attack, int defense) : name(name), health(health), attack(attack), defense(defense)
{
}

Character::~Character() {}

void Character::setHealth (int health) 
{
    this->health = health;
}

int Character::getHealth() const
{
    return health;
}

void Character::setAttack(int attack) 
{
    this->attack = attack;
}

int Character::getAttack() const
{
    return attack;
}

void Character::setDefense (int defense)
{
    this->defense = defense;
}

int Character::getDefense() const
{
    return defense;
}

void Character::setName(string name)
{
    this->name = name;
}

string Character::getName() const
{
    return name;
}

int Character::attackCharacter(Character& character)
{
    int damage = 0;
    damage -= attack - character.getDefense();
    character.setHealth(character.getHealth() - damage);

    return damage;
}