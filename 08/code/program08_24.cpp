// this program demonstrates the vector size member function
#include <iostream>
#include <vector>
using namespace std;

// function prorotype
void showValues(vector<int>);

int main() {
    vector<int> values;

    // store a series of numbers in the vector
    for (int count = 0; count < 7; count++)
        values.push_back(count * 2);
    
    // display the numbers
    showValues(values);

    return 0;
}

/**
 *              showValues
 * this function accepts an int vector as its sole argument
 * and displays the value stored in each of the vectors elements
 */
void showValues(vector<int> vect) {
    for (int count = 0; count < vect.size(); count++)
        cout << vect[count] << "  ";
    cout << endl;
}