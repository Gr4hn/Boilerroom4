#include <iostream>
#include "../PlayerClass/Characters/player.h"



using namespace std;

//Defence mechanics to class player 

void combat (Player player, Foe foe) {
    int choice;
    cout << "You are in a fight!" << endl;

    cout << "You are fighting a " << foe.getName() << endl;
    cout << "You have " << player.getHealth() << " health left" << endl;

    cout << "What do you want to do?" << endl;
    cout << "1. Attack" << endl;
    cout << "2. Defend" << endl;
    cout << "3. Run" << endl;

    cin >> choice;
    switch (choice) {
        case 1:
            player.attackCharacter(foe);
            break;
        case 2:
            player.defend(foe.getDamage(), player.getDefense(), player.getHealth());
            break;
        case 3:
            cout << "You ran away!" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}