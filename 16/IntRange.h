// IntRange.h
#ifndef INTRANGE_H
#define INTRANGE_H

#include <iostream>
using namespace std;


class IntRange {
    private:
        int input;
        int lower;
        int upper;
    public:
        // exception class
        class OutOfRange {
            // emtpy class declaratioj
        };
        // member functions
        IntRange(int low, int high) {
            lower = low;
            upper = high;
        }
        int getInput() {
            cin >> input;
            if (input < lower || input > upper) {
                throw OutOfRange();
            }
            return input;
        }
};
#endif

/*
 *

    Instead of throwing a string or some value of a primitive type, this function throws an
    exception class. Notice the empty class declaration that appears in the public section:

    Notice that the class has no members. The only important part of this class is its name,
    which will be used by the exception handling code.
    The throw statement’s argument, OutOfRange() , causes an instance of the OutOfRange
    class to be created and thrown as an exception. All that remains is for a catch block to
    handle the exception.

 */