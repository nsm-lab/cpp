#include <iostream>
#include <iomanip>
#include "basic_data_types/basic_data_types.h"
#include "dictionary_map/map.h"
#include "conditionals/conditional.h"
#include "functions/max_of_four.h"
#include "guess_game/guess.h"
#include "strings/strings.h"
#include "arrays/studentGrades.h"
#include "math/math.h"
#include "io/io.h"
#include "chapter_2/seconds_to_hours_formatting.h"
#include "file_input_output/fileIO.h"
#include "chapter_3/movieTickets.h"

using namespace std;


void basics();
int main () {
    // secToHMS(9630);
    // input_output();
    // basics();
    // dict_map();
    // conditional_();
    // guess();
    // function_max();
    // strings();
    // student_grades();
    // math();
    // io();
    // fileIO();
    movieSalesReport();
    return 0;  // you always have to put this in c++.
}

void basics() {
    cout << "Hello, bro World!" << endl;
    const double PI = 3.1415926535;  // like float but usually accurate up to 15 digits. (8 bytes)
    char myGrade = 'A';  // 1 byte in memory
    bool isHappy = true;  // 1  (1 byte)
    bool isSad = false;  // 0  (1 byte)
    int myAge = 39;  // 4 bytes
    float favNum = 3.141529;  // 4 bytes
    double otherFavNum = 1.6180339887;  // 8 bytes.
    int largestInt = 2147483647;  // 2^31 since 4 bytes have 32 bits. 0 including reduces it to 31.
    int largestIntPlusOne = 2147483648;  // 2^31 since 4 bytes have 32 bits. 0 including reduces it to 31.
    int five = 5;
    int num = 10;
    num += 1;
    string thing = "thing";
    printf("HI person!\n");


    // =================== PRINT STUFF ========================
    cout << "Favorite number " << favNum << endl;
    cout << "Size of double: " << sizeof(PI) << endl;
    cout << "Size of char: " << sizeof(myGrade) << endl;
    cout << "Size of bool: " << sizeof(isHappy) << endl;
    cout << "Size of bool: " << sizeof(isSad) << endl;
    cout << "Size of int: " << sizeof(myAge) << endl;
    cout << "Size of float: " << sizeof(favNum) << endl;
    cout << "Size of double: " << sizeof(otherFavNum) << endl;
    cout << "Largest possible int: " << largestInt << endl;
    cout << "Largest possible int plus one: " << largestIntPlusOne << " causes code to break." << endl;
    cout << "5 ++ = " << five++ << endl;  // this increments 5 to 6  (increments AFTER).
    cout << "++ 5 = " << ++five << endl;  // this increments 6 by 1 equalling 7  (increments BEFORE).
    cout << "5 -- = " << five-- << endl;  //
    cout << "-- 5 = " << --five << endl;
    cout << "num += 1: " << num << endl;
    cout << "(1 + 3 * 5): " << 1 + 3 * 5 << endl;
    cout << "string: " << thing << endl;
    cout << "4 / 5 = " << 4 / 5 << endl;
    cout << "4 / 5 = " << (float) 4 / 5 << endl;  // how I wrote (float)... It is called casting.
    cout << "4 / 5 = " << (double) 4 / 5 << endl;  // how I wrote (double)... It is called casting.
    cout << "4 / 5 = " << (int) 4 / 5 << endl;  // how I wrote (int)... It is called casting.

    // ternary operator
    // variable = (condition) ? true : false
    int bigNum = (5 > 2) ? 5 : 2;
    cout << "bigNum: " << bigNum << endl;
    int bigNum2 = (1 > 2) ? 5 : 2;
    cout << "bigNum: " << bigNum2 << endl;

    // Arrays
    int array1[5];  // store 5 elements.
    int badNums[5] = {5, 12, 10, 5, 2};
    cout << "bad numbers: " << badNums << endl;
    cout << "bad numbers: " << badNums[1] << endl;
    cout << "bad numbers: " << badNums[-1] << endl;
    cout << "bad numbers: " << badNums[4] << endl;
    cout << "bad numbers: " << badNums[5] << endl;
    cout << "bad numbers: " << badNums[100] << endl;

    // Casting
    cout << static_cast<int> (7.9) << endl;

    cout << "static_cast<double> (25) = "
         << static_cast<double> (25) << endl;

    cout << "static_cast<double> (5 + 3) = "
         << static_cast<double> (5 + 3) << endl;

    cout << "static_cast<double> (15) / 2 = "
         << static_cast<double> (15) / 2 << endl;

    cout << (15) / 2 << endl;

    cout << "static_cast<int> ('A') = "
    << static_cast<int> ('A') << endl;

    cout << "static_cast<int> ('B') = "
    << static_cast<int> ('B') << endl;

    cout << "static_cast<char> (65) = "
    << static_cast<char> (65) << endl;

    cout << 'A' + 'B' << endl;
    cout << static_cast<int> ('A') + static_cast<int> ('B') << endl;

    string bob = "Bob";
    cout << "bob = " << bob << endl;
    for (int i = 0; i < bob.size(); i++) {
        cout << "bob[" << i << "] = " << bob[i] << endl;
    }

    char _num;
    _num = '2';
    cout << "'2' + 'B' = " << _num + 'B' << endl;
    cout << setprecision(2) << "Set precision(2) of 5.323 = " << 5.323 << endl;
    cout << setprecision(1) << "Set precision(1) of 5.323 = " << 5.323 << endl;
    cout << setw(26) << "H I J K L M N O P Q R S T" << endl;
    cout << std::fixed << std::showpoint;
    cout << setw(10) << 20.56 << setw(10) << 50.2 << endl;
    cout << setw(10) << 20.56 << setw(10) << 50.2 << endl;
    // Let's learn about CONSTANT values
    // const dataType identifier = value;
    const double CONVERSION_CENTIMETER = 2.54;
    const int NO_OF_STUDENTS = 20;
    const char BLANK = ' ';
    cout << CONVERSION_CENTIMETER << endl;
    const float CONVERSION = 2.54f;
    cout << CONVERSION << endl;
    cout << 5%7 << endl;
}
// Other types include:
// short int: At least 16 bits
// long int: At least 32 bits
// long long int: At least 64 bits
// unsigned int: Same size as signed version
// long double: Not less than double
