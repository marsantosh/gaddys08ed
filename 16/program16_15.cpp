// program16_15.cpp
// this program demonstrates the STL count algorithm
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> values;
    vector<int>::iterator iter;

    // store some values in the vector
    values.push_back(1);
    values.push_back(2);
    values.push_back(2);
    values.push_back(3);
    values.push_back(3);
    values.push_back(3);

    // display the values in the vector
    cout << "The valius in the vector are: " << endl;
    for (iter = values.begin(); iter != values.end(); iter++) {
        cout << *iter << " ";
    }    
    cout << endl;

    // display the count of each number
    cout << "The number of 1s in the vector is ";
    cout << count(values.begin(), values.end(), 1) << endl;
    cout << "The number of 2s in the vector is ";
    cout << count(values.begin(), values.end(), 2) << endl;
    cout << "The number of 3s in the vector is ";
    cout << count(values.begin(), values.end(), 3) << endl;
    cout << "The number of 4s in the vector is ";
    cout << count(values.begin(), values.end(), 4) << endl;

    return 0;
}