// program17_04.cpp
// this program illustrates the NumberList append
// insert, and displayList member functions
#include "SortedNumberList.h"

int main() {
    SortedNumberList list;

    // add elements in order
    list.add(2.5);
    list.add(7.9);
    list.add(12.6);

    // add a value that should go in the middle of the list
    list.add(10.5);

    // add a value that should be at the beggining of the lsit
    list.add(1.1);

    // display the list
    list.displayList();
    cout << endl;
    
    return 0;
}