#include "GamePlay.h"
#include "sleepForSeconds.h"
#include "clearScreen.h"

using namespace std;

void gamePlay() {
    bool characterIsSelected = false;
    int choiceOfCharacter = 0;
    cout << "Welcome to the game!" << endl;
    sleepForSeconds(2);
    clearScreen();
    do {
        clearScreen();
        cout << "Choose your character: " << endl;
        cout << "1. Warrior" << endl;
        cout << "2. Mage" << endl;
        cout << "3. Exit" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                choice = 0;
                cout << "You have chosen the Warrior!" << endl;
                sleepForSeconds(1);
                cout << "Your stats are: " << endl;
                sleepForSeconds(1);
                cout << "Health: 125" << endl;
                cout << "Attack: 10" << endl;
                cout << "Defense: 15" << endl;
                cout << "Select 1 to confirm or 2 to choose another character." << endl;
                cin >> choiceOfCharacter;
                
                do 
                {
                    if (choice == 1) {
                        cout << "Nice choice!" << endl;
                        sleepForSeconds(2);
                        characterIsSelected = true;
                        break;
                }
                    else if (choice == 2) {
                        characterIsSelected = false;
                        break;
                }
                    else {
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }
                } while (choiceOfCharacter != 1 || choiceOfCharacter != 2);
                break;
            case 2:
                choice = 0;
                cout << "You have chosen the Mage!" << endl;
                sleepForSeconds(2);
                cout << "Your stats are: " << endl;
                sleepForSeconds(2);
                cout << "Health: 100" << endl;
                cout << "Attack: 20" << endl;
                cout << "Defense: 5" << endl;
                cout << "Select 1 to confirm or 2 to choose another character." << endl;
                cin >> choiceOfCharacter;
                do 
                {
                    if (choice == 1) {
                        cout << "Great choice!" << endl;
                        sleepForSeconds(2);
                        characterIsSelected = true;
                        break;
                }
                    else if (choice == 2) {
                        characterIsSelected = false;
                }
                    else {
                        clearScreen();
                        cout << "Invalid choice. Please try again." << endl;
                        sleepForSeconds(2);
                }
                } while (choiceOfCharacter != 1 || choiceOfCharacter != 2);
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
    
    clearScreen();
    cout << "Character selected. Starting game..." << endl;
    sleepForSeconds(2);
    clearScreen();

    cout << "You are in a forest. You see a path to the left and right." << endl;
}