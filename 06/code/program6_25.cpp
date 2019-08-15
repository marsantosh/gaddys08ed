// this program illustrates two appropriate uses
// of passing arguments by reference,
#include <iostream>
using namespace std;

// function prototypes
void getNums(int&, int&);
void orderNums(int&, int&);

int main() {
    int small, big;

    // call getNums to input the two numbers
    getNums(small, big);

    // call orderNums to put the numbers in order
    orderNums(small, big);

    // display the new values
    cout << "The two input members ordered smallest to biggest are "
         << small << " and " << big << endl;
    
    return 0;
}

void getNums(int &input1, int &input2) {
    cout << "Enter an integer: ";
    cin >> input1;
    cout << "Enter a second integer: ";
    cin >> input2;
}


void orderNums(int &num1, int &num2) {
    int temp;

    // if numbers are out of order, swap them
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
}