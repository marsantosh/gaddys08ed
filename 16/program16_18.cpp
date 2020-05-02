// program16_18.cpp
// this program demonstrates the for_each find algorithm
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// function prototype
void doubleValue(int &);


int main() {
    vector<int> numbers;
    vector<int>::iterator iter;

    // store some numbers in the vector
    for (int x = 0; x < 10; x++) {
        numbers.push_back(x);
    }

    // display the numbers in the vector
    cout << "The numbers in the vector are: " << endl;
    for (iter = numbers.begin(); iter != numbers.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    // double the values in the vector
    for_each(numbers.begin(), numbers.end(), doubleValue);

    // display the numbers in the vector again
    cout << "Now the numbers in the vector are: " << endl;
    for (iter = numbers.begin(); iter != numbers.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}


/*
 * doubleValue <- function
 * this function accepts an int reference as its argument.
 * the value of the argument is doubled.
 */
void doubleValue(int &val) {
    val *= 2;
}
