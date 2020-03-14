// intarray.cpp
#include "IntArray.h"
#include <cstdlib>
#include <iostream>


/*
 * constructor for IntArray class. Sets tje size of
 * the array and allocates memory for it
 */
IntArray::IntArray(int s) {
    arraySize = s;
    aptr = new int [s];
    for (int count = 0; count < arraySize; count++) {
        *(aptr + count) = 0;
    }
}


/*
 * copy constrcutor for IntArray class
 */
IntArray::IntArray(const IntArray &obj) {
    arraySize = obj.arraySize;
    aptr = new int [arraySize];
    for (int count = 0; count < arraySize; count++) {
        *(aptr + count) = *(obj.aptr + count);
    }
}


/*
 * destructor for IntArray class
 */
IntArray::~IntArray() {
    if (arraySize > 0) {
        delete [] aptr;
    }
}


/*
 * subError function. Displays an error message and
 * exits the program when a subscript is out of range
 */
void IntArray::subError() const {
    cout << "ERROR: Subscript out of range.\n";
    exit(0);
}


/*
 * overloadded [] operator. The argument is a subscript
 * this function returns a reference to the element in the
 * array indexed by the subscript
 */
int &IntArray::operator[](int sub) const {
    if (sub < 0 || sub >= arraySize)
        subError();
    return aptr[sub];
}
