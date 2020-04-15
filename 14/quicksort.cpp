// quicksort.cpp
// this program demonstrates the Quicksort algorithm
#include <iostream>
#include <algorithm>
using namespace std;


// function prototypes
void quickSort(int [], int, int);
int partition(int [], int, int);


int main() {
    // array to be sorted
    const int SIZE = 10;
    int array[SIZE] = {12, 34, 2, 12, 65, 75, 34, 65, 5, 9};

    // echo the array to be sorted
    for (int k = 0; k < SIZE; k++) {
        cout << array[k] << " ";
    }
    cout << endl;

    // sort the array using quicksort
    quickSort(array, 0, SIZE - 1);

    // print the sorted array
    for (int k = 0; k < SIZE; k++) {
        cout << array[k] << " ";
    }
    cout << endl;

    return 0;
}

/*
 * quickSort uses the QuickSort algorithm to sort
 * arr from arr[start] through arr[end]
 */
void quickSort(int arr[], int start, int end) {
    if (start < end) {
        // partition the array and get the pivot point
        int p = partition(arr, start, end);

        // sort the portion before the pivot point
        quickSort(arr, start, p - 1);

        // sort the portion after the pivot point
        quickSort(arr, p + 1, end);
    }
}


/*
 * partition rearranges the entries in the array arr from
 * start to end so all values greater than or equal to the
 * pivot are on the right of the pivot and all values less
 * than are on the left of the pivot.
 */
int partition(int arr[], int start, int end) {
    // the pivot element is taken to be the element at
    // the start of the subrange to be partitioned
    int pivotValue = arr[start];
    int pivotPosition = start;

    // rearrange the rest of the array elements to
    // partition the subrange from start to end
    for (int pos = start + 1; pos <= end; pos++) {
        if (arr[pos] < pivotValue) {
            // arr[scan] is the "current" item
            // swap the current item with the item to the
            // right of the pivot element.
            swap(arr[pivotPosition + 1], arr[pos]);
            
            // swap the current item with the pivot element
            swap(arr[pivotPosition], arr[pivotPosition + 1]);   

            // adjust the pivot position so it stays with the
            // pivot element
            pivotPosition++;
        }
    }
    return pivotPosition;
}