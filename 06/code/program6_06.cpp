// this program demonstrates a function with a parameter
#include <iostream>
using namespace std;

// function prototype
void displayValue(int num);

int main() {
    cout << "I am passing 5 to displayValue.\n";
    displayValue(5);
    cout << "Now a am back in main.\n";
    return 0;
}

/*
 * displayValue
 */
void displayValue(int num) {
    cout << "The valie is " << num << endl;
}