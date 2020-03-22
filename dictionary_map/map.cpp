//
// Created by Rafeh Qazi on 12/18/15.
//

#include "map.h"
// this program shows conditional_ statements in cpp
// hackerrank
// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else
#include <iostream>
#include <map>
using namespace std;

int dict_map() {
    map<int, char> example = {{1, 'a'}, {2, 'b'}};
    auto search = example.find(2);
    if(search != example.end()) {
        cout << "Found " << search->first << " " << search->second << '\n';
    } else {
        cout << "Not found\n";
    }

    // ANOTHER DICT/MAP EXAMPLE
    map<char, int> dict1;

    dict1['b'] = 100;
    dict1['a'] = 200;
    dict1['c'] = 300;

    //show content:
    for (map<char, int>::iterator it=dict1.begin(); it!=dict1.end(); ++it)
        cout << it->first << " => " << it->second << '\n';

    return 0;
}

