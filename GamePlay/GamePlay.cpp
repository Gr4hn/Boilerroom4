#include "GamePlay.h"
#include "sleepForSeconds.h"
#include "clearScreen.h"

using namespace std;

void gamePlay() {
    bool characterIsSelected = false;
    cout << "Welcome to the game!" << endl;
    sleepForSeconds(2);
    clearScreen();
    do {
        cout << "Choose your character: " << endl;
        cout << "1. Warrior" << endl;
        cout << "2. Mage" << endl;
        cout << "3. Exit" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "You have chosen the Warrior!" << endl;
                sleepForSeconds(1);
                cout << "Your stats are: " << endl;
                sleepForSeconds(1);
                cout << "Health: 125" << endl;
                cout << "Attack: 10" << endl;
                cout << "Defense: 15" << endl;
                break;
            case 2:
                cout << "You have chosen the Mage!" << endl;
                sleepForSeconds(2);
                cout << "Your stats are: " << endl;
                sleepForSeconds(2);
                cout << "Health: 100" << endl;
                cout << "Attack: 20" << endl;
                cout << "Defense: 5" << endl;
                break;
            case 3:
                cout << "Exiting..." << endl;
                sleepForSeconds(2);
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
    }
    } while (characterIsSelected == true);
    
    cout << "Character selected. Starting game..." << endl;
}