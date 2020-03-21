// program11_20.cpp
// This program demonstrates the order in which base and
// derived class constructors and destructors are called.
// For the sake of simplicity, all the class declarations are in this file
#include <iostream>
using namespace std;


// base class
class BaseDemo {
    public:
        // constructor
        BaseDemo() { cout << "This is the BaseDemo cosntructor.\n"; }
        // destructor
        ~BaseDemo() { cout << "This is the BaseDemo destructor.\n"; }
};


// derived class
class DeriDemo : public BaseDemo {
    public:
        // constructor
        DeriDemo() { cout << "This is the DeriDemo constructor.\n"; }
        // destructor
        ~DeriDemo() { cout << "This is the DeriDemo destructor.\n"; }
};


int main() {
    cout << "We will now create a deriDemo object.\n";
    DeriDemo object;
    cout << "The program is nowo goind to end.\n";
    return 0;
}