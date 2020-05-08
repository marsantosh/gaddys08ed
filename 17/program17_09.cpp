// program17_09.cpp
// this program demonstrates the STL list container
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList;
    list<int>::iterator iter;

    // add values to the list
    for (int x = 0; x < 100; x += 10) {
        myList.push_back(x);
    }

    // display the values
    for (iter = myList.begin(); iter != myList.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    // now reverse the order of the elements
    myList.reverse();

    // display the values again
    for (iter = myList.begin(); iter != myList.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}