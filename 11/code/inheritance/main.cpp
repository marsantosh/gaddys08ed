// main.cpp
// this program demonstrates the creation and use of
// objects of derived classes
#include <iostream>
#include "Inheritance.h"

using namespace std;

// these arrays of string are sued to print the
// enumerated types
const string dName[] = {
    "Archeology", "Biology", "Computer Science"
};

const string cName[] = {
    "Freshman", "Sophomore", "Junior", "Senior"
};


int main() {
    // create a Faculty object
    Faculty prof;

    // use a Person member function
    prof.setName("Indiana Jones");

    // use a faculty member function
    prof.setDepartment(ARCHEOLOGY);
    cout << "Professor " << prof.getName()
         << " teches in the " << "Deparment of ";

    // get department as an enumerated type
    Discipline dept = prof.getDepartment();

    // print ouot the department in string form
    cout << dName[dept] << endl;

    return 0;
}