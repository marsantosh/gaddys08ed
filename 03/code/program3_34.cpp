// this program demonstrates using the c++ time function
// to provide a "seed" for the random number generator
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    unsigned seed;

    // use the time function to get a "seed" value for srand
    seed = time(0);
    srand(seed);

    // now generate and print three random numbers
    cout << rand() << "      ";
    cout << rand() << "      ";
    cout << rand() << "      " << endl;
    return 0;
}