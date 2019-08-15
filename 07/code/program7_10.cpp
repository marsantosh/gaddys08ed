// this program uses a constant reference parameter
// It also shows how to return an object from a function
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
        void storeInfo(int p, string d, int oH, double cost);

        int getPartNum() const
        { return partNum; }

        string getDescription() const
        { return description; }

        int getOnHand() const
        { return onHand; }

        double getPrice() const
        { return price; }
};

// implementation code for InventoryITem class function storeInfo
void InventoryItem::storeInfo(int p, string d, int oH, double cost) {
    partNum = p;
    description = d;
    onHand = oH;
    price = cost;
}

// function prototypes for client program
InventoryItem createItem();
void showValues(const InventoryItem&);

/**
 * main function section
 */
int main() {
    InventoryItem part = createItem();
    showValues(part);
    return 0;
}

/**
 * createItem
 */
InventoryItem createItem() {
    InventoryItem tempItem;
    int partNum;
    string description;
    int qty;
    double price;

    // get the data from the user
    cout << "Enter data for the new part number \n";
    cout << "Part number: ";
    cin >> partNum;
    cout << "Description: ";
    cin.get();

    getline(cin, description);
    cout << "Quantity on hand: ";
    cin >> qty;
    cout << "Unit price: ";
    cin >> price;

    // store the data in the InventoryItem object and return it
    tempItem.storeInfo(partNum, description, qty, price);
    return tempItem;
}

void showValues(const InventoryItem &item) {
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Part number     : " << item.getPartNum() << endl;
    cout << "Description     : " << item.getDescription() << endl;
    cout << "Units On Hand   : " << item.getOnHand() << endl;
    cout << "Price           : " << item.getPrice() << endl;
}