// this program nests one class inside another.
// it gas a class witha  member vriable that is an isntance of another
// class
#include <iostream>
using namespace std;

class Rectangle {
    private:
        double length;
        double width;
    public:
        void setLength(double len)
        { length = len; }
        void setWidth(double wid)
        { width = wid; }
        double getLength()
        { return length; }
        double getWidth()
        { return width; }
        double getArea()
        { return length * width; }
};

class Carpet {
    private:
        double pricePerSqYd;
        Rectangle size;         // size in an instance of the Rectangle class
    public:
        void setPricePerYd(double p)
        { pricePerSqYd = p; }
        void setDimensions(double len, double wid) {
            size.setLength(len / 3);        // convert feet to yards
            size.setWidth(wid / 3);
        }
        double getTotalPrice()
        { return (size.getArea() * pricePerSqYd) ;}
};

/**
 * Client program
 */
int main() {
    Carpet purchase;
    double pricePerYd;
    double length;
    double width;

    cout << "Room length in feet: ";
    cin >> length;
    cout << "Room width in feet: ";
    cin >> width;
    cout << "Carpet price per sq. yard: ";
    cin >> pricePerYd;

    purchase.setDimensions(length, width);
    purchase.setPricePerYd(pricePerYd);

    cout << "\nThe total price of my new " << length << " x " << width
         << " carpet is $ " << purchase.getTotalPrice() << endl;
    
    return 0;
}