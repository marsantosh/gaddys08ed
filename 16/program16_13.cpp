// program16_13.cpp
// this program prived a simple demonstration of the
// vector STL template
#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> vect;

    for (int x = 0; x < 10; x++) {
        vect.push_back(x * x);
    }

    // print everything using iterators
    vector<int>::iterator iter = vect.begin();
    while (iter != vect.end()) {
        cout << *iter << " ";
        iter++;
    }
    cout << endl;

    return 0;
}
