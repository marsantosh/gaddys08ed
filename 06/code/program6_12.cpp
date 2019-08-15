// this program demonstrates two value-returning functions
#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
double getRadius();
double square(double numbeR);


/*
 * main funciton
 */
int main() {
    // vars and consts
    const double PI = 3.14159;
    double radius, area;

    // set the numbericoutput formatting
    cout << fixed << showpoint << setprecision(2);

    // get the radius of the circle
    cout << "This program calculates the area of a circle.\n";
    radius = getRadius();

    // calculate the area of the circle
    area = PI * square(radius);

    // display the area
    cout << "The area is " << area << endl;
    return 0;
}

/*
 * getRadius
 */
double getRadius() {
    double rad;

    cout << "Enter the radius of the circle: ";
    cin >> rad;
    return rad;
}

/*
 * square
 */
double square(double number) {
    return number * number;
}