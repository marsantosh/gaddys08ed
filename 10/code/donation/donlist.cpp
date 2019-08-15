#include <iostream>
#include "donlist.h"
using namespace std;

// ********************************************
// *                 constructor              *
// ********************************************
DonationList::DonationList(int num, double gifts[]){
    numDonations = num;
    if (num > 0) {
        // allocate an array of doubles
        donations = new double[num];

        // allocate an array of pointer-to-doubles
        arrayPointer = new double*[num];

        // initialize the arrays
        for (int count = 0; count < numDonations; count++) {
            donations[count] = gifts[count];
            arrayPointer[count] = &donations[count];
        }

        // now, sort the array pointers
        selectSort();
    }
}

//                  destructor
DonationList::~DonationList() {
    if (numDonations > 0) {
        delete [ ] donations;
        donations = 0;
        delete [ ] arrayPointer;
        arrayPointer = 0;
    }
}

//                  selectSort
void DonationList::selectSort() {
    int minIndex;
    double *minElem;

    for (int scan = 0; scan < (numDonations - 1); scan++) {
        minIndex = scan;
        minElem = arrayPointer[scan];
        for (int index = scan + 1; index < numDonations; index++) {
            if (*(arrayPointer[index]) < *minElem) {
                minElem = arrayPointer[index];
                minIndex = index;
            }
        }
        arrayPointer[minIndex] = arrayPointer[scan];
        arrayPointer[scan] = minElem;
    }
}

//                  show
void DonationList::show() {
    for (int count = 0; count < numDonations; count++)
        cout << donations[count] << "  ";
        cout << endl;
}

//                  showSorted
void DonationList::showSorted() {
    for (int count = 0; count < numDonations; count++)
        cout << *(arrayPointer[count]) << "  ";
    cout << endl;
}