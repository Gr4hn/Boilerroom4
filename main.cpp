#include "basics/sleepForSeconds.h"
#include "basics/clearScreen.h"
#include "gamePlay/gamePlay.h"
#include <iostream>


using namespace std;

void Menu () {
    bool gameIsRunning = true;
    clearScreen();
    do {
        cout << "Main Menu" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. Options" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Starting game..." << endl;
                gamePlay();
                sleepForSeconds(2);
                break;
            case 2:
                cout << "Options..." << endl;
                break;
            case 3:
                cout << "Quitting..." << endl;
                sleepForSeconds(2);
                gameIsRunning = false;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (gameIsRunning == true);
}


int main() {
    cout << "Hello, World!" << endl;
    //Startmeny funktion  
    sleepForSeconds(2);
    Menu();
    //Hejdå meddealnde
    clearScreen();
    cout << "Goodbye, World!" << endl;
    cin.ignore();
    cin.get();
    return 0;
} 