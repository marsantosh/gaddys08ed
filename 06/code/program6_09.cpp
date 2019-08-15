// this program demonstrates that changes to a functin
// parameter have no effect on the original argument
#include <iostream>
using namespace std;

// function prototype
void changeMe(int aValue);

int main() {
    int number = 12;

    // display the value in number
    cout << "In main number is " << number << endl;

    // call changeMe, passing the value in number as an argument
    changeMe(number);

    // display the value in number again
    cout << "Back in main again, number is still " << number << endl;
    return 0;
}

/*
 * changeMe
 */
void changeMe(int myValue) {
    // change the value of myValue to 0
    myValue = 0;

    // display the value in myVale
    cout << "In changeMe, the value has been changed to "
         << myValue << endl;
}