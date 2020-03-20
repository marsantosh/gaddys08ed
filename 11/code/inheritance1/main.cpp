// main.cpp
// this program demonstrates the use of 
// objects of derived classes
#include "Inheritance1.h"
#include <iostream>
using namespace std;

// these arrays of string are used to print
// values of enumerated types
const string dName[] = {"Archeology", "Biology", "Computer Science"};
const string cName[] = {"Freshman", "Sophomore", "Junior", "Senior"};

int main() {
    // create Faculty and Student objects
    Faculty prof("Indiana Jones", ARCHEOLOGY);
    Student st("Sean Bolster", ARCHEOLOGY, &prof);
    cout << "Profesor " << prof.getName() << " teaches "
         << dName[prof.getDepartment()] << "." << endl;
    
    // get student's advisor
    Person *pAdvisor = st.getAdvisor();
    cout << st.getName() << "\'s advisor is " << (*pAdvisor).getName() << "."
         << endl;
    
    return 0;
}