// program11_17.cpp
// this program illustrates aggregation, composition and
// object lifetimes
#include <iostream>
#include <string>
using namespace std;

class Date {
    private:
        string month;
        int day, year;
        int personID;
    public:
        Date(string m, int d, int y, int id):
        month(m), day(d), personID(id) {
            cout << "Date-Of-Birth object for person "
                << personID << " has been created.\n";
        }
        ~Date() {
            cout << "Date of Birth object for person "
                 << personID << " has been destroyed.\n";
        }
};


class Country {
    private:
        string name;
    public:
        Country(string name) : name(name) {
            cout << "A Country object has been created.\n";
        }
        ~Country() {
            cout << "A Contry object has been destroyed.\n";
        }
};


class Person {
    private:
        string name;
        Date dateOfBirth;
        int personID;
        Country *pCountry;
    public:
        static int uniquePersonID;
        Person(string name, string month, int day, int year, Country *pC):
        name(name), dateOfBirth(month, day, year, Person::uniquePersonID),
        personID(Person::uniquePersonID),
        pCountry(pC) {
            cout << "Person object " << personID << " has been created.\n";
            Person::uniquePersonID++;
        }
        ~Person() {
            cout << "Person object " << personID << " has been destroyed.\n";
        }
        int getPersonID() const { return personID; }
};

// define the static class variable
int Person::uniquePersonID = 0;

// main
int main() {

    // create a country object
    Country usa("USA");

    // create a Person ojbect
    Person *p = new Person("Peter Lee", "January", 1, 1985, &usa);

    // create another Person object
    Person p1("Eva Gustafson", "May", 15, 1992, &usa);

    cout << "No there are two people.\n";

    // delete the first person
    delete p;

    cout << "Now there is only one.\n";

    // the second person will go out of  scope when main returns
    return 0;
}