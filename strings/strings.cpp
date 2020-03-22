//
// Created by Rafeh Qazi on 12/18/15.
//

#include "strings.h"
// #include <string>
#include <iostream>

using namespace std;

int strings() {
    /*
    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
    string birthday = " Birthday";
    cout << happyArray + birthday << endl;

    string yourName;
    cout << "What is your name ";
    getline(cin, yourName);

    cout << "hello " << yourName << endl;

    double eulerConstant = .57721;
    string eulerGuess;
    double eulerGuessDouble;

    cout << "What is Euler's Constant? ";
    getline(cin, eulerGuess);

    eulerGuessDouble = stod(eulerGuess);

    if(eulerGuessDouble == eulerConstant) {
        cout << "You are right" << endl;
    } else {
        cout << "You are wrong" << endl;
    }
    cout << "Size of String " << eulerGuess.size() << endl;
    cout << "Is string empty " << eulerGuess.empty() << endl;
    cout << eulerGuess.append(" was your guess") << endl;
    */

    string dogString = "dog";
    string catString = "cat";
    string five = "5";
    string ten = "10";

    cout << dogString.compare(catString) << endl;
    cout << dogString.compare(dogString) << endl;
    cout << catString.compare(dogString) << endl;
    cout << five.compare(ten) << endl;

    string cat_copy = catString.assign(catString);
    cout << cat_copy << endl;

    string wholeName = "Rafeh Qazi";
    string firstName = wholeName.assign(wholeName, 0, 5);
    cout << firstName << endl;

    string brotherName = "Najmus Qazi";

    unsigned long firstNameIndex = brotherName.find("Najmus", 0);  // expected 0
    unsigned long lastNameIndex = brotherName.find("Qazi", 0);  // expected 7
    cout << "Index for first name " << firstNameIndex << endl;
    cout << "Index for last name " << lastNameIndex << endl;

    brotherName.insert(6, " Muhammad");
    cout << brotherName << endl;

    brotherName.erase(6, 9);  // 1st arg: number of characters to delete, 2nd arg: index
    cout << brotherName << endl;

    brotherName.replace(7, 4, "Maximus");
    cout << brotherName << endl;

    return 0;
}
