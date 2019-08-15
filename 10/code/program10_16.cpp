// this program uses pointers to dynamically allocate
// structures and class objects
#include <iostream>
#include <string>
using namespace std;

// person class
class Person {
    private:
        string name;
        int age;
    public:
        Person(string name1, int age1) {
            name = name1;
            age = age1;
        }

        int getAge()
        { return age; }

        string getName()
        { return name; }
};

// rectangle structure
struct Rectangle {
    int width, height;
};

int main() {
    Rectangle *pRect;
    Person *pPerson;

    // create a rectangle object and access it through a pointer
    Rectangle rect;
    pRect = &rect;
    (*pRect).height = 12;
    pRect->width = 10;
    cout << "Area of the first rectangle is "
         << pRect->width * pRect->height;
    
    // allocate a Rectangle object and access it through a pointer
    pRect = new Rectangle;
    pRect->height = 6;
    pRect->width = 5;
    cout << "\nArea of the second rectangle is "
         << pRect->width * pRect->height;
    
    // allocate a Person object and call its methods through
    // a pointer
    pPerson = new Person("Miguel E. Gonzalez", 23);
    cout << "\nThe person's name is " << pPerson->getName();
    cout << "\nThe person's age is " << pPerson->getAge() << endl;

    return 0;
}