// program14_01.cpp
// this program demonstrates a simple recursive function
#include <iostream>
using namespace std;


// function prototype
void message(int);

int main() {
    message(6);
    return 0;
}

/*
 * definition of function `message`. If the value in times
 * is greater than 0, the message is displayed and the function
 * is recursively called with the argument times - 1
 */
void message(int times) {
    if (times > 0) {
        cout << "Message " << times << endl;
        message(times - 1);
    }
}
    