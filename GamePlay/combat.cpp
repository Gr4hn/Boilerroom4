#include <iostream>
#include "../PlayerClass\Characters\player.h"

using namespace std;

//Defence mechanics to class player 
int Player:: defend (int damage, int defense, int health)
{
    int damageTaken = damage - defense;
    if (damageTaken < 0)
    {
        damageTaken = 0;
    }
    setHealth(health-damageTaken);
    getHealth();
    cout << "You took " << damageTaken << " damage." << endl;
}