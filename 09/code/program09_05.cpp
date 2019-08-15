// this program uses the selection sort algorithm to sort
// an array in ascending order
#include <iostream>

// function prorotypes
void selectionSort(int [], int);
void showArray(const int [], int);

// main function
int main() {
    const int SIZE = 6;

    // array of unsorted values
    int values[SIZE] = {5, 7, 8, 9, 1};

    // display the values
    std::cout << "The unsorted values are\n";
    showArray(values, SIZE);

    // sort the array
    selectionSort(values, SIZE);

    // display the values again
    std::cout << "The sorted values are\n";
    showArray(values, SIZE);
    return 0;
}

/*                      selectionSort                        */
void selectionSort(int array[], int size) {
    int startScan, minIndex, minValue;

    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++) {
            if (array[index] < minValue) {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

/*                      showArray                            */
void showArray(const int array[], int size) {
    for (int count = 0; count < size; count++) {
        std::cout << array[count] << " ";
    }
    std::cout << std::endl;
}