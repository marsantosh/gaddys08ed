// this program demonstrates a destructor
#include <iostream>
using namespace std;

class Demo {

    public:
        Demo();
        ~Demo();
};

Demo::Demo() {
    cout << "An object has hyst been defined, so the contructor"
         << " is running." << endl;
}

Demo::~Demo() {
    cout << "Now the destructor is running.\n";
}

int main() {
    Demo demoObj;

    cout << "The object now exists, but is about to be destroyed.\n";
    return 0;
}
