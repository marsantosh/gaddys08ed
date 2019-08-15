// this program implements a rectangle calss
#include <iostream>
using namespace std;

 /**
  * @brief  This is some comment
  * @note   This is come note about the class
  * @retval None
  */
class Rectangle {

    private:
        double length;
        double width;
    public:
        void setLength(double);
        void setWidth(double);
        double getLength();
        double getWidth();
        double getArea();
};


// * Member function implementation section

/**
 * Rectangle::setLength
 */
void Rectangle::setLength(double len) {
    if (len >= 0.0)
        length = len;
    else {
        length = 1.0;
        cout << "Invalid length. Using default value of 1.0" << endl;
    }
}

/**
 * Rectangle::setWidth
 */
void Rectangle::setWidth(double w) {
    if (w >= 0.0) {
        width = w;
    }
    else {
        width = 1.0;
        cout << "Invalid width. Using default value of 1.0" << endl;
    }
}

/**
 * Rectangle::getLength
 */
double Rectangle::getLength() {
    return length;
}

/***************************************
 *          Rectangle::getWidth        *
 ***************************************/
double Rectangle::getWidth() {
    return width;
}

/**
 * Rectangle::getArea
 */
double Rectangle::getArea() {
    return length * width;
}

/**
 * main
 */
int main() {
    Rectangle box;
    double boxLength, boxWidth;

    // get box length and width
    cout << "This program will calculate the area of a rectangle.\n";
    cout << "What is the length? ";
    cin  >> boxLength;
    cout << "What is the width? ";
    cin  >> boxWidth;

    // call member functions to set box dimenions
    box.setLength(boxLength);
    box.setWidth(boxWidth);

    // call member functions to get box information to display
    cout << "\nHere is the rectangle's data:\n";
    cout << "Length: " << box.getLength() << endl;
    cout << "Width : " << box.getWidth() << endl;
    cout << "Area  : " << box.getArea() << endl;

    return 0;
}
