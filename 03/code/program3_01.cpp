#include <iostream>
using namespace std;

int main() {
    int length, width, area;
    cout << "This program calculates the area of a rectangle.\n";

    cout << "length?: ";
    cin >> length;
    cout << "width?: ";
    cin >> width;

    // compute and display area
    area = length * width;
    cout << "the area of the rectangle is " << area << endl;
    return 0;
}