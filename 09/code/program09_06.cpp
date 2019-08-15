// this program uses bubble sort to sort an array of objects
// it places Inventory objects in ascending order by their itemCode.
#include <iostream>
#include <iomanip>
#include <string>
#include "Inventory.h"

/*                      program that uses the Inventory class           */

// function prototypes
void displayInventory(const Inventory[], int);
void bubbleSort(Inventory[], int);


/*                      main                     */
int main() {
    const int SIZE = 6;

    // create and initialize the array of Inventory objects
    Inventory silverware[SIZE] = {
        Inventory("S15", "soup spoon", 2.35),
        Inventory("S12", "teaspoon",   2.19),
        Inventory("F15", "dinner fork", 3.19),
        Inventory("F09", "salad fork" , 2.25),
        Inventory("K33", "knife",       2.35),
        Inventory("K41", "steak knife", 4.15)
    };

    // dusplay the inventory
    std::cout << "Here is the original data\n";
    displayInventory(silverware, SIZE);

    // sort the obkects by their itemCode
    bubbleSort(silverware, SIZE);

    // display the inventory again
    std::cout << "\nHere is the sorted data\n";
    displayInventory(silverware, SIZE);

    return 0;
}

/*                      displayInventory                         */
/**     this function displays the entire array                  */
void displayInventory(const Inventory object[], int size) {
    for (int index = 0; index < size; index++) {
        std::cout << std::setw(5) << std::left << object[index].getCode()
                  << std::setw(13) << std::left << object[index].getDescription()
                  << " $ "        << std::right << object[index].getPrice() << std::endl;
    }
}

/*                       bubbleSort                              */
/*      this function performsa bubble sort on Inventory
        objects, arranging them in ascending itemCode order      */
void bubbleSort(Inventory array[], int size) {
    Inventory temp;
    bool swap;

    do {
        swap = false;
        for (int count = 0; count < (size - 1); count++) {
            if (array[count].getCode() > array[count + 1].getCode()) {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}