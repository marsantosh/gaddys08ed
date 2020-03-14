// main.cpp
// this program demonstrates a class that behaves
// like an array
#include <iostream>
#include "IntArray.h"
using namespace std;

int main() {
    IntArray table(10);

    // store values in the array
    for (int x = 0; x < table.size(); x++) {
        table[x] = (x * 2);
    }

    // display the values in the array
    for (int x = 0; x < table.size(); x++) {
        cout << table[x] << " ";
    }
    cout << endl;

    // use the built-in operator on array elements
    for (int x = 0; x < table.size(); x++) {
        table[x] = table[x] + 5;
    }

    // display the values in the array
    for (int x = 0; x < table.size(); x++) {
        cout << table[x] << " ";
    }
    cout << endl;

    // use the built-in ++ operator on array elements
    for (int x = 0; x < table.size(); x++) {
        table[x]++;
    }

    // display the values in the array
    for (int x = 0; x < table.size(); x++) {
        cout << table[x] << " ";
    }

    cout << endl;
    return 0;
}