// this program demonstrated a function with three parameters
#include <iostream>
using namespace std;

// function protype
void showSum(int num1, int num2, int num3);

/*
 * main function
 */
int main() {
    int value1, value2, value3;

    // get 3 integers
    cout << "Enter three integers and I will display"
         << "Their sum: ";
    cin >> value1 >> value2 >> value3;

    // call showSum, passing 3 arguments
    showSum(value1, value2, value3);
    return 0;
}

/*
 * showSum
 */
void showSum(int num1, int num2, int num3) {
    cout << "The sum is " << (num1 + num2 + num3) << endl;
}