#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
#include <iostream>

using namespace std;

class Player : public Character
{
private:
    // Filips inventory
public:
    Player(string name, int health, int attack, int defense);
    ~Player();
};


#endif
