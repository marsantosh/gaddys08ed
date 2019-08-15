// this program unsafely stores values beyond an aray's boundary
// what happens depends on how your computer manages memory.
// It MAY overwrite other memory variables. It MAY crash your computer.
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int A[SIZE] = {1, 1, 1};
    int B[SIZE];

    // here is what is stoed in array A
    cout << "Here are the original numbers in 3-element array A:  ";
    for (int count = 0; count < 3; count++)
        cout << A[count] << "   ";
    
    // attempt to store seven numbers in the 3-element array
    cout << "\n\nNow I0m storing 7 numbers in 3-element array B.";
    for (int count = 0; count < 7; count++)
        B[count] = 5;
    
    // if the program is still running, display the numbers
    cout << "\nIf you see this message, the computer did not crash.";
    cout <<"\n\n Here are the 7 numbers in array B : ";
    for (int count = 0; count < 7; count++)
        cout << B[count] << "  ";
    
    cout << "\nHere are the nunmbers now in array A: ";
    for (int count = 0; count < 3; count++)
        cout << A[count] << "  ";
    
    cout << "\n\nArray A's values were overwritten by \n"
         << "the values that did not fit in Array B.\n";
    
    return 0;
}