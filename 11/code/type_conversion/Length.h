// Length.h
#ifndef _LENGTH_H
#define _LENGTH_H
#include <iostream>
using namespace std;

class Length {
    private:
        int len_inches;
    
    public:
        Length(int feet, int inches) {
            setLength(feet, inches);
        }
        Length(int inches) { len_inches = inches; }
        int getFeet() const { return len_inches / 12; }
        int getInches() const { return len_inches % 12; }
        void setLength(int feet, int inches) {
            len_inches = 12 * feet + inches;
        }

        // type conversion operators
        operator double() const;
        operator int() const { return len_inches; }

        // overloaded stream output operator
        friend ostream &operator<<(ostream &out, Length a);
};
#endif
