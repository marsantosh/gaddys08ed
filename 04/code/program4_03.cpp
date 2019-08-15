// this program uses the modulys operator to determine
// if a number is odd or even. If the number is evenly divisible
// by 2, it is an even number. A remanider indicates it is odd.
#include <iostream>

int main() {
    // main function
    int number;

    std::cout << "Enter an integer and I will tell you if it\n";
    std::cout << "is odd or even: ";
    std::cin >> number;

    if (number % 2 == 0)
        std::cout << number << " is even.\n";
    else
        std::cout << number << " is odd.\n";
    return 0;
}