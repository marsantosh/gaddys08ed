// this program uses a constrcutor to initialize a member variable
#include <iostream>
#include <cmath>
using namespace std;


/**
 * Circle class declaration
 */
class Circle {
    
    private:
        double radius;

    public:
        Circle();
        void setRadius(double);
        double getArea();
};

/**
 * Circle::Circle
 */
Circle::Circle() {
    radius = 1.0;
}

/**
 * Circle:setRadius
 */
void Circle::setRadius(double r) {
    if (r >= 0.0)
        radius = r;
}


/**
 * Circle::getArea
 */
double Circle::getArea() {
    return 3.14159 * pow(radius, 2);
}

/**
 * main
 */
int main() {
    // define a circle object. Because the setRadius function
    // is never called for it, it will keep the value set
    // by the constructor
    Circle circle1;

    // define a second circle object and set its radius to 2.5
    Circle circle2;
    circle2.setRadius(2.5);

    // get and display each circle's area
    cout << "The area of circle1 is " << circle1.getArea() << endl;
    cout << "The area of circle2 is " << circle2.getArea() << endl;

    return 0;
}