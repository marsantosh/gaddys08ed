#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double area, radius;

    cout << "This program calculates the area of a circle.\n" << endl;

    // get radius
    cout << "What is the radius of the circle? ";
    cin >> radius;

    // compute and display the area
    area = 3.14159 * pow(radius, 2);
    cout << "area: " << area << endl;
    return 0;
}