/*************************************************************************
 * This program allows the user to input seconds and formats it in H:M:S *
**************************************************************************/

#include "seconds_to_hours_formatting.h"
#include <iostream>

using namespace std;

void secToHMS(int seconds) {
    int hours, minutes;
    minutes = seconds / 60;
    hours = minutes / 60;
    cout << hours << ":" << minutes%60 << ":" << seconds%60 << endl;
}