//
// Created by Rafeh Qazi on 12/18/15.
//
#include <iostream>
#include "guess.h"

using namespace std;

int guess() {
    string numberGuessed;
    int intNumberGuessed = 0;
    do {
        cout << "Guess a number between 1 and 10: ";
        getline(cin, numberGuessed);
        intNumberGuessed = stoi(numberGuessed);
        cout << intNumberGuessed << endl;
    } while(intNumberGuessed != 4);
    cout << "You win" << endl;
    return 0;
}

