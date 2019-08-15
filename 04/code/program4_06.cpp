// this program demonstrates how to safely test a floating-point number
// to see if it is, for all practical purposes, equal to some value
#include <iostream>
#include <cmath>

int main() {
    // variable declaration
    double result = .666667 * 6.0;

    // 2/3 of 6 should be 4 and, if you print result, 4 is displayed
    std::cout << "result = " << result << std::endl;

    // however, internally result is NOT precisely equal to 4
    // so test to se if it is "close" to 4:
    if (std::abs(result - 4.0) < 0.0001)
        std::cout << "result DOES equal 4!" << std::endl;
    else
        std::cout << "result DOES NOT equal 4!" << std::endl;
    
    return 0;
}