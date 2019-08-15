/**
 * This program uses the Rectangle class.
 * The Rectangle class declaration is in file Rectangle.h
 * The Rectangle member function definitions are in Rectangle.cpp
 * These file sshould all be combined into a project
 */
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle box;
    double boxLength, boxWidth;

    // get box length and width
    cout << "This program will calculate the area of a rectangle.\n";
    cout << "What is the length? ";
    cin >> boxLength;
    cout << "What is the width? ";
    cin >> boxWidth;

    // call member functions to set box dimensions
    // if the function call returns false, it meas the
    // argument sento to it was invalid and not stored
    if (!box.setLength(boxLength))
        cout << "Invalid box length entered.\n";
    else if (!box.setWidth(boxWidth))
        cout << "Invalid box width entered.\n";
    else {
        // call member functions to get a box information to display
        cout << "\nHere is the rectangle's data:\n";
        cout << "Length: " << box.getLength() << endl;
        cout << "Width : " << box.getWidth() << endl;
        cout << "Area  : " << box.getArea() << endl;
    }
    return 0;
}
