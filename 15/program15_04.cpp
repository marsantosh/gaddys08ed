// program15_04.cpp
// this program demonstrates abstract base
// classes and pure virtual functions
#include <iostream>
using namespace std;

class Shape {
    protected:
        int posX, posY;
    public:
        virtual void draw() const = 0;
        void setPosition(int pX, int pY) {
            posX = pX;
            posY = pY;
        }
};


class Rectangle: public Shape {
    public:
        virtual void draw() const {
            cout << "Drawing rectangle at " << posX << "  "
                 << posY << endl;
        }
};


class Hexagon: public Shape {
    public:
        virtual void draw() const {
            cout << "Drawing hexagon at " << posX << "  "
                 << posY << endl;
        }
};


int main() {
    // create array of pointers to Shapes of various types
    const int NUM_SHAPES = 3;
    Shape *shapeArray[NUM_SHAPES] = {
        new Hexagon(),
        new Rectangle(),
        new Hexagon()
    };

    // set positions of all the shapes
    int posX = 5, posY = 15;
    for (int k = 0; k < NUM_SHAPES; k++) {
        shapeArray[k]->setPosition(posX, posY);
        posX += 10;
        posY += 10;
    };

    /// draw all the shapes at their positions
    for (int j = 0; j < NUM_SHAPES; j++) {
        shapeArray[j]->draw();
    }

    return 0;
}

/*
 * 
The first time the statement is executed, it invokes the draw function on a hexagon object,
while the second time, it invokes the draw function on a rectangle object. Because the two
draw functions are in different classes, they produce different behavior.
Remember the following points about abstract base classes and pure virtual functions:
 • When a class contains a pure virtual function, it is an abstract base class.
 • Abstract base classes cannot be instantiated.
 • Pure virtual functions are declared with the = 0 notation, and have no body, or definition.
 • Pure virtual functions must be overridden in derived classes that need to be instantiated.

 */
