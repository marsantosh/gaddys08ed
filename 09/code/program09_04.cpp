// this program uses the bubble sort algorithm to sort an
// array of integers in ascending order
#include <iostream>

// funtion prototypes
void sortArray(int [], int);
void showArray(const int [], int);

int main() {
    // main function
    const int SIZE = 10;

    // array of unsorted values
    int values[SIZE] = {7, 2, 3, 8, 9, 1, 4, 3, 4, 5};

    // display the values
    std::cout << "The soted values are:\n";
    showArray(values, SIZE);

    // sort the values
    sortArray(values, SIZE);

    // display them again
    std::cout << "The sorted values are:\n";
    showArray(values, SIZE);
    return 0;
}

/*                      sortArray [ bubble sort]                    */
void sortArray(int array[], int size) {
    int temp;
    bool swap;

    do {
        swap = false;
        for (int count = 0; count < (size - 1); count++) {
            if (array[count] > array[count + 1]) {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

/*                              showArray                            */
void showArray(const int array[], int size) {
    for (int count = 0; count < size; count ++) {
        std::cout << array[count] << " ";
    }
    std::cout << std::endl;
}
