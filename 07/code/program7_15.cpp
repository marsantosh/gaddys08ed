// this program passes a structure variable to one function
// by reference and to another as a constant reference
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct InvItem {
    int     partNum;
    string  description;
    int     onHand;
    double  price;
};

// function prototypes
/**
 * Function getItemData will receive an InvItem strcutre passed to it by
 * reference so new values can be stored in its member variables
 */
void getItemData(InvItem &);
void showItem(const InvItem &);

/**
 * function showItem will receive an InvItem structure passed to it as a constant
 * reference because showITem just need display member variiable values
 * not change them.
 */
int main() {
    InvItem part;

    getItemData(part);
    showItem(part);
    return 0;
}

/**
 *                      getItemData
 * This function stores data input by the user in the members of an
 * InvItem structrue variable passed to the function by reference.
 */
void getItemData(InvItem &item) {
    cout << "Enter the part number: ";
    cin >> item.partNum;
    cout << "Enter the part description: ";
    cin.get();
    getline(cin, item.description);
    cout << "Enter the quantity on hand: ";
    cin >> item.onHand;
    cout << "Enter the unit price      : ";
    cin >> item.price;
}

/**
 *                      showItem
 * This function displays the data stored in the members of an
 * InvItem structure variable passed to it as  a constant reference.
 */
void showItem(const InvItem &item) {
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Part Number     : " << item.partNum << endl;
    cout << "Description     : " << item.description << endl;
    cout << "Units on Hand   : " << item.onHand << endl;
    cout << "Price           : $ " << item.price << endl;
}