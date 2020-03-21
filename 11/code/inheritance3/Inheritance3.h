// Inheritance3.h
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


class Student :public Person {
    private:
        Discipline major;
        Person *advisor;
    public:
        // constructor
        Student(string name, Discipline d, Person *adv);

        void setMajor(Discipline d) { major = d; }
        Discipline getMajor() const { return major; }
        void setAdvisor(Person *p) { advisor = p; }
        Person *getAdvisor() const { return advisor; }
};


class Faculty:public Person {
    private:
        Discipline department;
    public:
        // constructor
        Faculty(string fname, Discipline d) : Person(fname) {
            department = d;
        }

        void setDepartment(Discipline d) { department = d; }
        Discipline getDepartment() const { return department; }
};


class TFaculty: public Faculty {
    private:
        string title;
    public:
        // this constructor allows the specification of a title
        TFaculty(string fname, Discipline d, string title): Faculty(fname, d) {
            setTitle(title);
        }

        void setTitle(string title) { (*this).title = title; }

        // override the getName function
        string getName() const { return title + " " + name; }
};
