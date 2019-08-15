#include <iostream>
using namespace std;

// function protoype
bool isEven(int);

int main() {
    // vars
    int val;

    // get a number from the user
    cout << "Enter an integer and I will tell you ";
    cout << "if it is even or odd: ";
    cin >> val;

    // indicate whether it is even or odd
    if (isEven(val))
        cout << val << " is even." << endl;
    else
        cout << val << " is odd." << endl;
    
    return 0;
}

/*
 * isEven
 */
bool isEven(int number) {
    if (number % 2 == 0)
        return true;
    else
        return false;
}