// program17_05.cpp
// this program demonstrates the remove member function
#include "NumberList.h"
using namespace std;


int main() {
    NumberList list;

    // build the list
    list.add(2.5);
    list.add(7.9);
    list.add(12.6);

    // display the list
    cout << "Here are the initial values:\n";
    list.displayList();
    cout << "\n\n";

    // demonstrate the remove function
    cout << "Now removing the value in the middle." << endl;
    list.remove(7.9);
    cout << "Here are the values left." << endl;
    list.displayList();
    cout << "\n\n";

    cout << "Now removing the last value." << endl;
    list.remove(12.6);
    cout << "Here are the values left." << endl;
    list.displayList();
    cout << "\n\n";

    cout << "Now removing the only remainging value." << endl;
    list.remove(2.5);
    cout << "Here are the values left." << endl;
    list.displayList();
    cout << endl;

    return 0;
}