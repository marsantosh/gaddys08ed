// this program makes sure that the divisor is not
// equal to 0 before it performs a divide operations
#include <iostream>

int main() {
    // main function
    double num1, num2, quotient;

    // get the two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // if num2 is not zero, perform the division
    if (num2 != 0) {
        quotient = num1 / num2;
        std::cout << "quotient of " << num1 << " and " << num2 << " is "
                  << quotient << ".\n";
    }
    else {
        std::cout << "Division by zero is not possible. \n";
        std::cout << "Please re-run the program and enter a valid second number.\n";
    }
    return 0;
}