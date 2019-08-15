// this program demonstrates a simple class with member functions
// defined outside the class declaration
#include <iostream>
#include <cmath>
using namespace std;

// circle class declaration
class Circle {

    private:
        double radius;
    
    public:
        void setRadius(double);
        double getArea();
};

/*
 *              Circle::setRadius
 */
void Circle::setRadius(double r) {
    radius = r;
}

/*
 *              Circle::getArea
 */
double Circle::getArea() {
    return 3.14159 * pow(radius, 2);
}

/*
 *              main
 */
int main() {

    Circle circle1,
           circle2;
    
    circle1.setRadius(1);
    circle2.setRadius(2.5);

    cout << "The area of circle1 is " << circle1.getArea() << endl;
    cout << "The area of circle2 is " << circle2.getArea() << endl;

    return 0;
}
