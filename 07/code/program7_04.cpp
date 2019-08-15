// this program demonstrates when a constrcutor executes
#include <iostream>
using namespace std;

class Demo {

    public:
        Demo() {
            cout << "Now the constructor is running.\n";
        }
};

int main() {
    // main function
    cout << "This is displayed before the object is created.\n";
    Demo demoObj;
    cout << "This is displayed after the object is created.\n";
    
    return 0;
}
