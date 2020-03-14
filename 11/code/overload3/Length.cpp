// Length.cpp
#include "Length.h"

/*
 * overloaded stream extraction operator >>
 */
istream &operator>>(istream &in, Length &a) {
    // prompt for and read the obeject data
    int feet, inches;
    cout << "Enter feet: ";
    in >> feet;
    cout << "Enter inches: ";
    in >> inches;

    // modify the object a with the data and return
    a.setLength(feet, inches);
    return in;
}

/*
 * overloaded stream insertion operator <<
 */
ostream &operator<<(ostream& out, Length a) {
    out << a.getFeet() << " feet, " << a.getInches() << " inches";
    return out;
}


/*
 * overloaded prefix ++ operator
 */
Length Length::operator++() {
    len_inches ++;
    return *this;
}


/*
 * overloaded postfix ++ operator
 */
Length Length::operator++(int) {
    Length temp = *this;
    len_inches++;
    return temp;
}


/*
 *overloaded operator +
 */
Length operator+(Length a, Length b) {
    return Length(a.len_inches + b.len_inches);
}


/*
 * overloaded operator -
 */
Length operator-(Length a, Length b) {
    return Length(a.len_inches - b.len_inches);
}


/*
 * overloaded operator ==
 */
bool operator==(Length a, Length b) {
    return a.len_inches == b.len_inches;
}


/*
 * overloaded operator <
 */
bool operator<(Length a, Length b) {
    return a.len_inches < b.len_inches;
}
