// this pointer demonstrates a function that returns
// a pointer.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// function prototype
int *getRandomNumbers(int);

int main() {
    int *numbers;

    // get an array if five random numbers
    numbers = getRandomNumbers(5);

    // display the numbers
    for (int count = 0; count < 5; count++)
        cout << numbers[count] << endl;
    
    // free the memory
    delete [] numbers;
    numbers = 0;
    return 0;
}

int *getRandomNumbers(int size) {
    int *array;

    // return null if size is zero or negative
    if (size <= 0)
        return NULL;
    
    // dynamically allocate the array
    array = new int[size];

    // seed the random number generator by passing
    // the return vlaue of time(0) to srand
    srand(time(0));

    // populate the array whit random numbers
    for (int count = 0; count < size; count++)
        array[count] = rand();
    
    // return a pointer to the array
    return array;
}
