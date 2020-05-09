// non_recursive_quicksort.cpp
// this program illustrates the use of a stack to 
// implement a nonrecursive quicksort
#include <stack>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;


// function prototypes
void qSort(int a[], int size);
void outputArray(const int a[], int size);
int partition(int a[], int, int);


// range is used to indicate a segment
// of an array that is still to be sorted
class Range {
    private:
        // make qSort a friend
        friend void qSort(int a[], int);
        int start;
        int end;
    public:
        Range(int s, int e) {
            start = s;
            end = e;
        }
};

const int MAX = 100;


int main() {
    ifstream inputFile;
    string filename = "sort.dat";
    int array[MAX];
    int size;

    inputFile.open(filename.data());
    if (!inputFile) {
        cout << "The file " << filename << " cannot be "
             << "opened .";
        exit(1);
    }

    // read the file and count the number of items in the
    // file. take care not to overrun the array
    size = 0;
    while (inputFile >> array[size]) {
        size++;
        if (size == MAX)
            break;
    }

    // echo the inputted array
    cout << "The original array is : " << endl;
    outputArray(array, size);

    // perform the sort and output the result
    qSort(array, size);
    cout << "The sorted array is: " << endl;
    outputArray(array, size);
    return 0;
}


/*
 * qSort performs a nonrecursive quicksort
 * on the array a[] of the given size
 */
void qSort(int arr[], int size) {
    // qStack holds segments of the array that have not
    // yet been sorted
    stack<Range> qStack;
    int pivot, start, end;

    qStack.push(Range(0, size - 1));

    // as long as there is a range waiting to be sorted,
    // take it off the stack, partition it, and then
    // put the resulting two smaller tanges onto the stack
    while (!qStack.empty()) {
        Range currentRange = qStack.top();
        qStack.pop();

        // get the endpoints of the current Range
        // and partition it
        start = currentRange.start;
        end = currentRange.end;

        if (start < end) {
            pivot = partition(arr, start, end);
            // store the resulting smaller ranges for later
            // processing
            qStack.push(Range(start, pivot - 1));
            qStack.push(Range(pivot + 1, end));
        }
    }
}


/*
 * partition rearranges the entries in the array `arr`
 * from start to end so all values greater than or equal to
 * the pivot are on the right of the pivot
 * and all values less than are on the left of the pivot*
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
            // wswap the current item with the item to the
            // tight of the pivot element
            swap(arr[pivotPosition + 1], arr[pos]);
            // swap the current item with the puvot element
            swap(arr[pivotPosition], arr[pivotPosition + 1]);
            // adjust the pivot position so it stays with
            // the pivot element
            pivotPosition++;
        }
    }
    return pivotPosition;
}


/*
 * output an array's elements
 */
void outputArray(const int arr[], int size) {
    for (int k = 0; k < size; k++) {
        if (k % 20 == 0)
            cout << endl;
        cout << arr[k] << "  ";
    }
    cout << endl;
}
