//
// Created by Rafeh Qazi on 12/18/15.
//

#include "max_of_four.h"
#include <iostream>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) {
    int result = a;
    int four[4] = {a, b, c, d};
    for(int i = 0; i <= (sizeof(four)/sizeof(*four)); i++) {
        if(four[i] > result) {
            result = four[i];
        }
    }
    return result;
}

int function_max() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
