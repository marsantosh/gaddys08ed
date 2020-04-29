// IntRange2.h
#ifndef INTRANGE2_H
#define INTRANGE2_H

#include <iostream>
using namespace std;


class IntRange2 {
    private:
        int input;      // for user input
        int lower;      // lower limit of range
        int upper;      // upper limit of range
    public:
        //exception classes
        class ExceptionLow {};
        class ExceptionHigh {};

        // member functions
        IntRange2(int low, int high) {
            lower = low;
            upper = high;
        }
        int getInput() {
            cin >> input;
            if (input < lower) {
                throw TooLow();
            }
            else if (input > upper) {
                throw TooHigh();
            }
            return input;
        }
};
#endif
