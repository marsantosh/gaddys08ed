// program18_04.cpp
// this program demonstrates the STL stack
// container adapter
#include <iostream>
#include <vector>
#include <stack>

using namespace std;


int main() {
    stack< int, vector<int> > iStack;

    for (int x = 2; x < 8; x += 2) {
        cout << "Pushing " << x << endl;
        iStack.push(x);
    }

    cout << "The size of the stack is ";
    cout << iStack.size() << endl;

    // print items and pop until the stack is empty
    while (!iStack.empty()) {
        cout << "Popping " << iStack.top() << endl;
        iStack.pop();
    }
    return 0;
}