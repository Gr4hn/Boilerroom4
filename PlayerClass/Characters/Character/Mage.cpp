#include "Mage.h"

Mage::Mage(string name, int health, int attack, int defense) : Player(name, health, attack, defense)
{
}

Mage::~Mage()
{
}

int Mage::attackCharacter(Character& character)
{
    int damage = 15;
    damage -= getAttack() - character.getDefense();
    character.setHealth(character.getHealth() - damage);
    cout << getName() << " attacked the foe with a fireball and made " << damage << " much damage!" << endl;

    return damage;
}

