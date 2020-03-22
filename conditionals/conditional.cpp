//
// Created by Rafeh Qazi on 12/18/15.
// HackerRank: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/submissions/code/15849620

#include "conditional.h"
#include <iostream>
#include <unordered_map>

using namespace std;

int conditional_() {
    unordered_map<int, string> numbers;
            numbers[1] = "one";
            numbers[2] = "two";
            numbers[3] = "three";
            numbers[4] = "four";
            numbers[5] = "five";
            numbers[6] = "six";
            numbers[7] = "seven";
            numbers[8] = "eight";
            numbers[9] = "nine";
    // printf("Input an integer: \n");  commented out to pass on hacker rank.
    int input;
    scanf("%d", &input);
    // auto search = numbers.find(input);
    if(input <= 9) {
        cout << numbers[input] << endl;
    } else if (input > 9) {
        cout << "Greater than 9" << endl;
        }
    return 0;
}
