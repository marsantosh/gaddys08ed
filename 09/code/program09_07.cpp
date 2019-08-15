// this program uses the bubble sort algorithm to sort
// a vector of integers in ascending order
#include <iostream>
#include <vector>

// function prototypes
void displayVector(std::vector<int>);
void sortVector(std::vector<int> &);

int main() {
    const int SIZE = 6;

    // create a vector to hold a set of unsorted integers
    std::vector<int> values(SIZE);

    // propmpt the user to enter the values to be stored
    std::cout << "Please enter " << SIZE << " integers separated by spaces.\n";
    for (int i = 0; i < SIZE; i++)
        std::cin >> values[i];
    
    // display the values
    std::cout << "\nThe unsorted values entered are:\n";
    displayVector(values);

    // sort the values
    sortVector(values);

    // display them again
    std::cout << "The sorted values are:\n";
    displayVector(values);
    return 0;
}

/*                      sortVector                       */
void sortVector(std::vector<int> &numbers) {
    int temp;
    bool swap;

    do {
        swap = false;
        for (unsigned count = 0; count < numbers.size() - 1; count++) {
            if (numbers[count] > numbers[count + 1]) {
                temp = numbers[count];
                numbers[count] = numbers[count + 1];
                numbers[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

/*                        displayVector                      */
void displayVector(std::vector<int> numbers) {
    for (unsigned count = 0; count < numbers.size(); count++) {
        std::cout << numbers[count] << " ";
    }
    std::cout << std::endl;
}
