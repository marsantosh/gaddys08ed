// program18_01.cpp
// this program illustrates the IntStack class
#include "IntStack.h"
#include <iostream>
using namespace std;

int main() {
    IntStack stack(5);
    int values[] = { 5, 10, 15, 20, 25 };
    int value;

    cout << "Pushing..." << endl;
    for (int k = 0; k < 5; k++) {
        cout << values[k] << "   ";
        stack.push(values[k]);
    }
    cout << "\nPopping...\n";
    while (!stack.isEmpty()) {
        stack.pop(value);
        cout << value << "  ";
    }
    cout << endl;
    return 0;
}