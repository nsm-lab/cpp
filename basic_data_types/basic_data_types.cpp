//
// Created by Rafeh Qazi on 12/17/15.
// Hacker Rank: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types

/*
C++ has the following data types. Below we give you their format specifier, and their most common bit width:
Int ("%d"): 32 Bit integer
Long ("%ld"): 32 bit integer (same as Int for modern systems)
Long Long ("%lld"): 64 bit integer
Char ("%c"): Character type
Float ("%f"): 32 bit real value
Double ("%lf"): 64 bit real value
char ch;
double d;
scanf("%c %lf", &ch, &d);
*/

#include "basic_data_types.h"

void input_output() {
    int n1, n2;
    long n3;
    char ch;
    float n4;
    double n5;
    scanf("%d %d %ld %c %f %lf", &n1, &n2, &n3, &ch, &n4, &n5);
    printf("%d %d %ld %c %f %lf", n1, n2, n3, ch, n4, n5);
}

