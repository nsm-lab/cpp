/* This program will demonstrate how to use file input and output in C++.
* Created by Rafeh Qazi on 12/26/15.
* File I/O in C++ is a 5 step process:
**********************************************************************************
* 1. Include header file fstream in the program.                                 *
* 2. Declare file stream variables.                                              *
* 3. Associate the file stream variables with the input/output sources.          *
* 4. Use the file stream variables with >>, <<, or other input/output functions. *
* 5. Close the files.                                                            *
**********************************************************************************
*/

// step 1
#include "fileIO.h"
#include <iostream>
#include <fstream>

using namespace std;

int fileIO() {
    string studentName;

     // step 2
    ifstream inData;
    ofstream outData;

    // step 3
    inData.open("students.txt");
    outData.open("students.out");

    // step 4
    getline(inData, studentName);
    outData << "Hi from iMac lol.";

    // step 5
    inData.close();
    outData.close();

    return 0;
}