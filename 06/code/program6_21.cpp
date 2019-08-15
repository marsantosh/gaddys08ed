// this program uses a static local variable
#include <iostream>
using namespace std;

void showStatic();

int main() {
    // call the showStatic function five times
    for (int count = 0; count < 5; count++)
        showStatic();
    return 0;
}

/*
 * showStatic
 * this function keeps track of how many times it
 * has been called by incrementing a
 * static local variable, numCalls, each time it is called.
 */
void showStatic() {
    static int numCalls = 0;

    cout << "This function has been called "
         << ++numCalls << " times. " << endl;
}
