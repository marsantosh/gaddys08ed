// Inheritance1.cpp
#include "Inheritance1.h"

/*
 * constructor for the Student class
 */
Student::Student(string sname, Discipline d, Person *adv) {
    // access the protected member name
    name = sname;

    // access the other members
    major = d;
    advisor = adv;
}
