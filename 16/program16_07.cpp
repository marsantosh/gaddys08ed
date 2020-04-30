// program16_07.cpp
// this program demonstrates the use of the swap
// function template
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    // get and swap two chars
    char firstChar, secondChar;
    cout << "Enter two characters: ";
    cin >> firstChar >> secondChar;
    swap(firstChar, secondChar);
    cout << firstChar << " " << secondChar << endl;

    // get and swap two ints
    int firstInt, secondInt;
    cout << "Enter two integers: ";
    cin >> firstInt >> secondInt;
    swap(firstInt, secondInt);
    cout << firstInt << " " << secondInt << endl;

    // get and swap two strings
    cout << "Enter two strings: ";
    string firstString, secondString;
    cin >> firstString >> secondString;
    swap(firstString, secondString);
    cout << firstString << " " << secondString << endl;

    return 0;
}