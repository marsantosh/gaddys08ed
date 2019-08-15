// this program passes an object to a function. IT passes it
// to one funciton by reference nd to another by value
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class InventoryItem {

    private:
        int partNum;
        string description;
        int onHand;
        double price;
    
    public:
        void storeInfo(int p, string, int oH, double cost);

        int getPartNum() {
            return partNum;
        }

        string getDesrciption() {
            return description;
        }

        int getOnHand() {
            return onHand;
        }

        double getPrice() {
            return price;
        }
};

// implementation code for InvenrotyItem class function storeInfo
void InventoryItem::storeInfo(int p, string d, int oH, double cost) {
    partNum = p;
    description = d;
    onHand = oH;
    price = cost;
}

// function prototypes for client program
void storeValues(InventoryItem&);
void showValues(InventoryItem);


/**
 * main
 */
int main() {
    InventoryItem part;

    storeValues(part);
    showValues(part);
    return 0;
}

/**
 * Store values
 */
void storeValues(InventoryItem &item) {
    int partNum;
    string description;
    int qty;
    double price;

    // get the data from the user
    cout << "Enter data from the new part number \n";
    cout << "Part number: ";
    cin >> partNum;
    cout << "Description: ";
    cin.get();

    getline(cin, description);
    cout << "Quantity on hand: ";
    cin >> qty;
    cout << "Unit price: ";
    cin >> price;

    // store the data in the InventoryItem object
    item.storeInfo(partNum, description, qty, price);
}

/**
 * showValues
 */
void showValues(InventoryItem item) {
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "part Number   : " << item.getPartNum() << endl;
    cout << "Description   : " << item.getDesrciption() << endl;
    cout << "Units On Hand : "  << item.getOnHand() << endl;
    cout << "Price         : $" << item.getPrice() << endl;
}