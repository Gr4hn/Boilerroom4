#ifndef WARRIOR_H
#define WARRIOR_H
#include "../player.h"
#include <iostream>
#include "../NPC/Foe.h"

using namespace std;

class Warrior : public Player
{
public:
    Warrior(string name, int health, int attack, int defense);
    ~Warrior();
    int attackCharacter(Character& character) override;
};

#endif
