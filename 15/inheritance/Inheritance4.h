// Inheritance4.h
#include <string>
using namespace std;

enum Discipline { ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE };
enum Classification { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };

class Person {
    protected:
        string name;
    public:
        Person() { setName(""); }
        Person(string pName) { setName(pName); }
        void setName(string pName) { name = pName; }
        string getName() const { return name; }
};


class Student:public Person {
    private:
        Discipline major;
        Person *advisor;
    public:
        Student(string sname, Discipline d, Person *adv): Person(sname) {
            major = d;
            advisor = advisor;
        }
        void setMajor(Discipline d) { major = d; }
        void setAdvisor(Person *p) { advisor = p; }
        Person *getAdvisor() const { return advisor; }
};


class Faculty: public Person {
    private:
        Discipline department;
    public:
        Faculty(string fname, Discipline d): Person(fname) {
            department = d;
        }
        void setDepartment(Discipline d) { department = d; }
        Discipline getDepartment() const { return department; }
};


class TFaculty: public Faculty {
    private:
        string title;
    public:
        TFaculty(string fname, Discipline d, string title): Faculty(fname, d) {
            setTitle(title);
        }
        void setTitle(string title) { this->title = title; }

        // override getName()
        string getName() const {
            return title + " " + Person::getName();
        }
};

/*
 *      examples of assigning derived class pointers to base classes:

    Person *ptp;
    TFaculty *ptf;
    // pointer to Derived class is assigned to Base class
    // pointer
    ptp = new TFaculty("Indiana Jones", ARCHEOLOGY, "Dr.");

    // Assigning a base class pointer to a derived class
    // pointer requires a typecast
    ptf = static_cast<TFaculty *>(ptp);


    In this section of code, the new operator returns a pointer to the derived class TFaculty ,
    which is assigned to the base class pointer ptp . The base class pointer ptp is then assigned
    to ptf using a type cast.
    These type compatibility rules apply in two other cases. A function that is declared as
    taking a pointer to a base class will accept a pointer to a derived class object as an actual
    parameter. Also, a function that declares a return type of a pointer to a particular class C
    may actually return a pointer to on object of a class derived from C.

 */
