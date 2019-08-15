// this program illustrates the use of the time function
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t epSeconds;
    epSeconds = time(NULL);
    cout << "Number of seconds since the epoch is "
         << epSeconds << endl;
    return 0;
}