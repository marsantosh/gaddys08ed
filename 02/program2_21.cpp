#include <iostream>
using namespace std;

int main() {
    int totalSeconds = 125,
        minutes,
        seconds;
    
    // compute the number of minutes
    minutes = totalSeconds / 60;

    // calculate the remaining seconds
    seconds = totalSeconds % 60;

    // display the results
    cout << totalSeconds << " seconds is equivalent to ";
    cout << minutes << " minutes and " << seconds << " seconds." << endl;
    return 0;
}