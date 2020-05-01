// SimpleVector.h
#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <iostream>
#include <cstdlib>
using namespace std;


template <class T>
class SimpleVector {
    private:
        T *aptr;
        int arraySize;
        void subError() const;
    public:
        SimpleVector(int);
        SimpleVector(const SimpleVector &);
        ~SimpleVector();
        int size() const { return arraySize; }
        T &operator[](int);
        void print() const;
};


/*
 * constructor for SimpleVector class.
 * sets the size of the array and allocates memory for it
 */
template <class T>
SimpleVector<T>::SimpleVector(int s) {
    arraySize = s;
    aptr = new T[s];
    for (int count = 0; count < arraySize; count++) {
        aptr[count] = T();
    }
}


/*
 * copy constructor for SimpleVector class
 */
template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj) {
    arraySize = obj.arraySize;
    aptr = new T[arraySize];
    for (int count = 0; count < arraySize; count++) {
        aptr[count] = obj[count];
    }
}


/*
 * destructor for SimpleVector class
 */
template <class T>
SimpleVector<T>::~SimpleVector() {
    if (arraySize > 0) {
        delete[] aptr;
    }
}


/*
 * subError fucntion
 * displays an error message and terminates the program
 * when a subscript is out of range.
 */
template <class T>
void SimpleVector<T>::subError() const {
    cout << "ERROR: Subscript out of range.\n";
    exit(0);
}


/*
 * overloaded [] operator.
 * the argument is a subscript. this function returns a reference
 * to the element in the array indexed by the subscript.
 */
template <class T>
T &SimpleVector<T>::operator[](int sub) {
    if (sub < 0 || sub >= arraySize) {
        subError();
    }
    return aptr[sub];
}


/*
 * pritns all the entries in the array
 */
template <class T>
void SimpleVector<T>::print() const {
    for (int k = 0; k < arraySize; k++) {
        cout << aptr[k] << "  ";
    }
    cout << endl;
}

#endif