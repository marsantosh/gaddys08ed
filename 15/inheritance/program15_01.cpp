// program15_01.cpp
// this program demonstrates type compatibility within 
// an inheritance hierarchy.
#include "Inheritance4.h"
#include <iostream>
using namespace std;

int main() {
    Person *pp;
    Faculty *pf;
    TFaculty *ptf;
    ptf = new TFaculty("Indiana Jones", ARCHEOLOGY, "Dr.");

    // calling getName through a pointer to TFaculty uses
    // the version og getName in TFaculty
    cout << "Get name through a pointer to TFaculty: ";
    cout << ptf->getName() << endl;

    // assignment of derived to base needs no cast
    pf = ptf;

    // calling getName through a pointer to Faculty uses
    // the version of getName in Faculty
    cout << "Get name through a pointer to Faculty: ";
    cout << pf->getName() << endl;

    // assignment of derived to base needs no cast
    pp = ptf;

    // derived class members can be accessed using a cast
    cout << "Get name through a cast to pointer to TFaculty: ";
    cout << static_cast<TFaculty *>(pp)->getName() << endl;

    // assignemnt from base to derived needs a cast
    TFaculty *ptf1;
    ptf1 = static_cast<TFaculty *>(pp);

    // Access getName through a pointer to TFaculty
    cout << "Get name through a pointer to TFaculty: ";
    cout << ptf1->getName() << endl;

    return 0;
}