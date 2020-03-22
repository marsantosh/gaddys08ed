// program12_10.cpp
// this program demonstrates the strcmp and atoi functions
#include <iostream>
#include <cstring>  // for strcmp
#include <cstdlib>  // for atoi
using namespace std;


int main() {
    // array uused to read numbers in string form
    const int LENGTH = 20;
    char input[LENGTH];

    int total = 0;
    int count = 0;
    double average;

    // read numbers and computer total of numbers
    cout << "This program will average a series of numbers.\n";
    cout << "Enter the first number or Q to quit: ";
    cin.getline(input, LENGTH);

    while ((strcmp(input, "Q") != 0) && (strcmp(input, "q") != 0)) {
        // keep a running total
        total += atoi(input);

        // keep track of how many numbers are entered
        count++;

        // are there more?
        cout << "Enter the next number or Q to quit: ";
        cin.getline(input, LENGTH);
    }

    // compute and print average
    if (count != 0) {
        average = double(total) / count;
        cout << "average: " << average << endl;
    }

    return 0;
}