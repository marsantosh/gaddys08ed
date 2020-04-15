// program14_02.cpp
// this program demonstrates a simple recursive function
#include <iostream>
using namespace std;

// function
void message(int);


int main() {
    message(6);
    return 0;
}

/*
 * definition of function message. if the valie in times
 * is greater than 0, the message is displayed and the function
 * is recursively called with the argument times - 1
 */
void message(int times) {
    cout << "Message " << times << endl;
    if (times > 0) {
        message(times - 1);
    }
    cout << "Message " << times << " is returning." << endl;
}