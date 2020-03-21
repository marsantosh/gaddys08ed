// Inheritance3.cpp
#include "Inheritance3.h"

/*
 * constructor for the student class and base construction init
 */
Student::Student(string sname, Discipline d, Person *adv): Person(sname) {
    major = d;
    advisor = adv;
}