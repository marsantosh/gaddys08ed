// determine if an int is a prime or not
#include <iostream>


bool isPrime(long int number);

int main() {
    // main function

    long int number;

    // display menu
    std::cout << "\nThis program determines if a given integer "
              << "is prime or not.\n" <<"Enter the integer to be tested: ";
    
    // get the integer
    std::cin >> number;

    if (isPrime(number))
        std::cout << "The number " << number << " IS prime." << std::endl;
    else
        std::cout << "The number " << number << " IS NOT prime." << std::endl;
    
    return 0;
}

bool isPrime(long int number) {
    // test if a given number is prime or not

    // it is obvious the last number to test
    // the primicity of the giben number must be
    // the half of it, every number after that gives
    // a non integer remainder in the interval (2, 1]
    long int upper_bound;
    upper_bound = number / 2;

    // by definition 1 is prime
    if (number == 1)
        return true;
    
    // test primicity
    // when a divisible number is encountered, loop exits
    // and returns false, if non was found return true.
    for (int index = 2; index <= upper_bound; index++) {
        if (number % index == 0)
            return false;
    }
    return true;
}