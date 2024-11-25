#ifndef Mage_H
#define Mage_H
#include "../player.h"
#include <iostream>
#include "../NPC/Foe.h"

using namespace std;

class Mage : public Player
{
public:
    Mage(string name, int health, int attack, int defense);
    ~Mage();
    int attackCharacter(Character& character) override;
};

#endif
