// serialization.h
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person {
    private:
        string fname, lname;
        char mi;
        int age;
    public:
        string getFname() const { return fname; }
        string getLname() const { return lname; }
        char getMi() const { return mi; }
        int getAge() const {return age; }

        void setFname(string name) { fname = name; }
        void setLname(string name) { lname = name; }
        void setMi(char ch) { mi = ch; }

        // read data from file
        void load(ifstream &inFile);

        // store data to file
        void store(ofstream &outFile);

        // constructor
        Person(string fname = "", char mi = 0, string lname = "", int age = 0);

        void display() {
            cout << fname << " " << mi << " " << lname << endl
                 << "Age: " << age << endl;
        }

};

