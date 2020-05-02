// program16_16.cpp
// this program demonstrates the STL max_element
// and min_element algorithms
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;
    vector<int>::iterator iter;

    // store some nubmers in the vector
    for (int x = 0; x < 10; x++) {
        numbers.push_back(x);
    }

    // shuffle things up just for fun
    random_shuffle(numbers.begin(), numbers.end());

    // display the numbers in the vector
    cout << "The numbers in the vector are: " << endl;
    for (iter = numbers.begin(); iter != numbers.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    // find the largest value in the vector
    iter = max_element(numbers.begin(), numbers.end());
    cout << "The largest value in the vector is "
         << *iter << endl;

    // find the smallest value in the vector
    iter = min_element(numbers.begin(), numbers.end());
    cout << "The smallest value in the vector is "
         << *iter << endl;
    
    return 0;
}