//
// Created by Rafeh Qazi on 12/25/15.
//

#include "io.h"
#include <iostream>
#include <istream>

using namespace std;

void ignoring();
void putBack();
void io() {
    // cout << "hello io.cpp" << endl;
    /*
    char varChar, ch1, ch2;
    int num;
    cin.get(varChar);
    cin.get(ch1);
    cin.get(ch2);
    cin >> num;
    cout << varChar << ch1 << ch2 << num << endl;

    int a, b;
    cin >> a;
    cin.ignore(100, '\n');  // ignore first hundred till you find newline.
    cin >> b;
    cout << b;
     */
    // ignoring();
    putBack();
}

void ignoring() {
    char ch1, ch2;
    // Hello there. My name is Mickey.
    cin >> ch1;
    cin.ignore(100, '.');
    cin >> ch2;
    cout << ch1 << endl;
    cout << ch2 << endl;
}

void putBack() {
    char ch;
    cout << "Line 1: Enter a string: ";
    cin.get(ch);
    cout << endl;

    cout << "Line 4: After first cin.get(ch); "
    << "ch = " << ch << endl;

    cin.get(ch);
    cout << "Line 6: After second cin.get(ch); "
    << "ch = " << ch << endl;

    cin.putback(ch);
    cin.get(ch);
    cout << "Line 9: After putback and then "
    << "cin.get(ch); ch = " << ch << endl;

    ch = cin.peek();
    cout << "Line 11: After cin.peek(); ch = "
    << ch << endl;

    cin.get(ch);
    cout << "Line 13: After cin.get(ch); ch= "
    << ch << endl;
}
