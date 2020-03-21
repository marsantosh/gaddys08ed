// main.cpp
// this program illustrates member function overriding
#include "Inheritance3.h"
#include <iostream>
using namespace std;


// these arrays of string are sued to output
// values of enumerated types
const string dName[] = { "Archeology", "Biology", "Computer Science" };
const string cName[] = { "Freshman", "Sophomore", "Junior", "Senior" };


int main() {
    // new constructor allows specification of title
    TFaculty prof("Indiana Jones", ARCHEOLOGY, "Dr.");
    Student st("Sean Bolster", ARCHEOLOGY, &prof);

    // use the new TFaculty version of getName
    cout << prof.getName() << " teaches " << dName[prof.getDepartment()] << "." << endl;

    // this call uses the Person version of getName
    Person *pAdvisor = st.getAdvisor();
    cout << st.getName() << "\'s advisor is " << (*pAdvisor).getName() << ".";
    cout << endl;

    return 0;
}

/*
    An object of a derived class that has overridden a base class member function contains
    more than one version of the member function. The compiler will determine which of the
    several versions to call by using type information in the expression used to make the call to
    the member function. For example, in this program, there are two calls to getName() :
        1.  The call prof.getName() returns Dr. Indiana Jones because the function is
            called through prof , which has type TFaculty . The compiler calls the TFaculty
            version getName() .
        2.  The call pAdvisor->getName() returns Indiana Jones without the “Dr.” because
            the function is called through the pointer pAdvisor , which is a pointer to Person .
            The compiler calls the Person version of getName() .
*/