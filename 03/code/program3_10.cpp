#include <iostream>
using namespace std;

int main() {
    // set intVar to the maximum valie a short int can hold
    short intVar = 32767;

    // set floatvar to a number too small to fit in float
    float floatVar = 3.0E-47;

    // display intVar
    cout << "original value of intVar: " << intVar << endl;

    // add 1 to intVar
    intVar += 1;
    cout << "intVar after overlfow: " << intVar << endl;

    // subtract 1 from intVar to make it overflow again
    intVar -= 1;
    cout << "intVar after 2nd overflow " << intVar << endl;

    // display floatVar
    cout << "value of very tiny floatVar " << floatVar << endl;
    return 0; 
}
