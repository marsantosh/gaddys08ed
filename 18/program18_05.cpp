// program18_05.cpp
// this program demonstrates thee IntQueue class
#include <iostream>
#include "IntQueue.h"
using namespace std;

int main() {
    IntQueue iQueue(5);

    cout << "Enqueuing 5 items...\n";

    // enqueue 5 items
    for (int k = 1; k <= 5; k++) {
        iQueue.enqueue(k * k);
    }

    // dequeue and retrieve all items int he queue
    cout << "The values in the queue were: ";
    while (!iQueue.isEmpty()) {
        int value;
        iQueue.dequeue(value);
        cout << value << "   ";
    }
    cout << endl;
    return 0;
}
