// this program displays the calues c++ uses to reprsent
// true and false
#include <iostream>

int main() {
    // main program
    bool trueValue, falseValue;
    int x = 5, y = 10;

    trueValue = (x < y);
    falseValue = (y == x);

    std::cout << "true is " << trueValue << std::endl;
    std::cout << "false is " << falseValue << std::endl;
    return 0;
}