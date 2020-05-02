// program16_14.cpp
// this program provides a simple demonstration of the 
// STL algorithms

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vect;

    // use push_back to push values into the vector
    for (int x = 0; x < 10; x++) {
        vect.push_back(x * x);
    }

    // display the vector's elements
    cout << "The collection has " << vect.size()
         << " elements. Here they are:\n";
    /*
     * declare x as unsigned because vect.size() returns
     * an unsigned int. When comparing against each other it 
     * is recommended that both are compatible for proper
     * comparison. Other way around is to conver vect.size() return
     * type to int.
     */
    for (unsigned x = 0; x < vect.size(); x++) {
        cout << vect[x] << " ";
    }
    cout << endl;

    // randomly shuffle the vector's contents
    random_shuffle(vect.begin(), vect.end());

    // display the vector's elements
    /*
     * now casting the unsigned integer to signed
     * integer with static_cas for proper comparison
     */
    cout << "The elements have been shuffled:\n";
    for (int x = 0; x < static_cast<int>(vect.size()); x++) {
        cout << vect[x] << " ";
    }
    cout << endl;

    // Now sort them
    sort(vect.begin(), vect.end());

    // display the evector's elements again
    cout << "The elements have been sorted: " << endl;
    for (unsigned x = 0; x < vect.size(); x++) {
        cout << vect[x] << "  ";
    }
    cout << endl;

    // now search for an element
    int val = 49;
    if (binary_search(vect.begin(), vect.end(), val)) {
        cout << "The value " << val
             << " was found in the vector." << endl;
    }
    else {
        cout << "The value " << val
             << " was not found in the vector." << endl;
    }

    return 0;
}