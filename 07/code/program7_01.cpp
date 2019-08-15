// this program demonstrates a simple class
#include <iostream>
#include <cmath>
using namespace std;

// circle class declaration
class Circle {

    private:
        double radius;
    
    public:
        void setRadius(double r) {
            radius = r;
        }

        double getArea() {
            return 3.14159 * pow(radius, 2);
        }
};


int main() {
    // define 2 circle objects
    Circle circle1,
           circle2;
    
    // call the setRadius function foe each circle
    circle1.setRadius(1);
    circle2.setRadius(2.5);

    // call the getarea function for each circle
    // and display the returned result
    cout << "Thea rea of circle1 is " << circle1.getArea() << endl;
    cout << "Thea rea of circle2 is " << circle2.getArea() << endl;

    return 0;
}