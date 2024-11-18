#include "player.h"

Player::Player(int health, int attack, int defense) : Character(health, attack, defense)
{
    this->health = health;
    this->attack = attack;
    this->defense = defense;
}
void Player::setHealth (int health)
{
    health = 100;
}
int Player::getHealth ()
{
    return health;
}
void Player::setAttack (int attack) 
{
    attack = 10;
}
int Player::getAttack ()
{
    return attack;
}
void Player::setDefense (int defense)
{
    defense = 5;
}
int Player::getDefense ()
{
    return defense;
}
void Player::displayInventory ()
{
    cout << "Inventory: " << endl;
    cout << "1. Sword" << endl;
    cout << "2. Shield" << endl;
    cout << "3. Health Potion" << endl;
    cout << "4. Mana Potion" << endl;
    cout << "5. Exit" << endl;
}