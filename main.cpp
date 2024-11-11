#include "basics/sleepForSeconds.h"
#include "basics/clearScreen.h"
#include <iostream>


using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    //Startmeny funktion  
    sleepForSeconds(2);
    //Hejdå meddealnde
    cin.ignore();
    cin.get();
    return 0;
} 