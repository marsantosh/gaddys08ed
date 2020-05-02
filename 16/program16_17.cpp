// program16_17.cpp
// this program demonstrates the STL find algorithm
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
    vector<int> numbers;
    vector<int>::iterator iter;

    // store some nubmers in the vector
    for (int x = 0; x < 10; x++) {
        numbers.push_back(x);
    }

    // display the numbers in the vector
    cout << "The vector are: " << endl;
    for (iter = numbers.begin(); iter != numbers.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    // find argvument value number in the vector
    iter = find(numbers.begin(), numbers.end(), 7);
    cout << "The valie searched for is " << *iter << endl;

    return 0;
}