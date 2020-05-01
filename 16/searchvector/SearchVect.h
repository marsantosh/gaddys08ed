#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

#include "../simplevector/SimpleVector.h"

template <class T>
class SearchableVector: public SimpleVector<T> {
    public:
        // constructor
        SearchableVector(int s): SimpleVector<T>(s) { }
        // copy constructor
        SearchableVector(SearchableVector &);
        // additional constructor
        SearchableVector(SimpleVector<T> &obj): SimpleVector<T>(obj) { }
        int findItem(T);
};


/*
 * definition of the copy constructor
 */
template <class T>
SearchableVector<T>::SearchableVector(SearchableVector & obj): SimpleVector<T>(obj) {

}

/*
 * findItem takes a parameter of type T
 * and searches for it within the array
 */
template <class T>
int SearchableVector<T>::findItem(T item) {
    for (int count = 0; count < this->size(); count++) {
        if (this->operator[](count) == item) {
            return count;
        }
    }
    return -1;
}

#endif