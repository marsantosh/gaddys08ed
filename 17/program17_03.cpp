// program17_03.cpp
// this program demonstrates the add and
// display linked list operations
#include "NumberList.h"
using namespace std;

int main() {
    NumberList list;
    list.add(2.5);
    list.add(7.9);
    list.add(12.6);
    list.add(546.45);
    list.add(67.8);
    list.displayList();
    cout << endl;
    return 0;
}