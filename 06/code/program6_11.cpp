// this program uses a function that returns a value
#include <iostream>
using namespace std;

// function prototype
int sum(int num1, int num2);

int main() {
    // vars
    int value1 = 20,
        value2 = 40,
        total;
    
    // cal the sum function
    total = sum(value1, value2);

    // display the sum of the values
    cout << "The sum of " << value1 << " and " << value2;
    cout << " is " << total << endl;
    
    return 0;
}

/*
 * sum
 */
int sum(int num1, int num2) {
    return num1 + num2;
}