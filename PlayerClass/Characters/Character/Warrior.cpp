#include "Warrior.h"

Warrior::Warrior(string name, int health, int attack, int defense) : Player(name, health, attack, defense)
{
}

Warrior::~Warrior()
{
}

int Warrior::attackCharacter(Character& character)
{
    int damage = 20;
    damage -= getAttack() - character.getDefense();
    character.setHealth(character.getHealth() - damage);
    cout << getName() << " attacked the foe with a slash from his sword and made " << damage << " much damage!" << endl;

    return damage;
}

