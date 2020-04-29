// IntRange3.h
#ifndef INTRANGE3_H
#define INTRANGE3_H

#include <iostream>
using namespace std;


class IntRange3 {
    private:
        int input;
        int lower;
        int upper;
    public:
        // exception class
        class OutOfRange {
            public:
                int value;
                OutOfRange(int i) { value = i; }
        };
        // member functions
        IntRange3(int low, int high) {
            lower = low;
            upper = high;
        }
        int getInput() {
            cin >> input;
            if (input < lower || input > upper) {
                throw OutOfRange(input);
            }
            return input;
        }
};
#endif
