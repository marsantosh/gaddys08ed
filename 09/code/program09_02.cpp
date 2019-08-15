// tis program performs a binary search on an integer
// array whose elements are in ascending order
#include <iostream>
using namespace std;

// function prototype
int binarySearch(const int [], int, int);

const int SIZE = 20;

int main() {
    // create an array of ID numbers sorted in ascending order
    int IDnums[SIZE] = {
        101, 142, 147, 189, 199, 207, 222,
        234, 289, 296, 310, 319, 388, 395,
        417, 420, 447, 521, 536, 600
    };

    int empID,
        results;
    
    // get an enployee ID to search for
    cout << "Enter the employee ID you wish to search for: ";
    cin  >> empID;

    // search for the ID
    results = binarySearch(IDnums, SIZE, empID);

    // if binarySearch returned -1, the ID was not found
    if (results == -1)
        cout << "That number does not exist in the array.\n";
    else {
        // otherwise results contains the sucscript of
        // the spcified employee ID in the array
        cout << "ID " << empID << " was found in element "
             << results << " of the array.\n";
    }
    return 0;
}

/*                      binarySerch                      */
int binarySearch(const int array[], int size, int value) {
    int first = 0,
        last = size -1,
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last) {
        middle = (first + last) / 2;
        if (array[middle] == value) {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}