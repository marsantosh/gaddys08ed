// program12_05.cpp
// this program correctly tests two C-strings for equality with
// the strcmp function
#include <iostream>
#include <cstring>
using namespace std;


int main() {
    // two arrays for two strings
    const int LENGTH = 40;
    char firstString[LENGTH], secondString[LENGTH];

    // read two strings
    cout << "Enter a string: ";
    cin.getline(firstString, LENGTH);
    cout << "Enter another string: ";
    cin.getline(secondString, LENGTH);

    // compare the strings for equality with strcmp
    if (strcmp(firstString, secondString) == 0)
        cout << "You entered the same string twice.\n";
    else
        cout << "The strings are not the same.\n";
    cout << endl;

    return 0;
}