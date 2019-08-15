// this program searches an array of Inventory ibjects to get
// the price of a particular object. It demonstrates how to
// perform a linear search using an array of objects
#include <iostream>
#include <string>
using namespace std;

// inventory class declaration
class Inventory {
    private:
        string itemCode;
        string description;
        double price;
    public:
        Inventory()
        { itemCode = "XXX"; description = " "; price = 0.0 ; }

        Inventory(string c, string d, double p) {
            itemCode = c;
            description = d;
            price = p;
        }

        // add mehtods setCode, setDescription, and setPrice here

        // get functions to retrieve member variable values
        string getCode() const {
            string code = itemCode;
            return code;
        }

        string getDescription() const {
            string d = description;
            return d;
        }

        double getPrice() const
        { return price; }
};

/******************************************************************************* *
**                      program that yses the inventory class                    *
******************************************************************************** */
// function prototype
int search(const Inventory[], int, string);

// main function
int main() {
    const int SIZE = 6;

    // create and initiaize the array of Inventory objects
    Inventory silverware[SIZE] = {
        Inventory("S15", "soup spoon", 2.35),
        Inventory("S12", "teaspoon",   2.19),
        Inventory("F15", "dinner fork", 3.19),
        Inventory("F09", "salad fork" , 2.25),
        Inventory("K33", "knife",       2.35),
        Inventory("K41", "steak knife", 4.15)
    };

    string desiredCode;
    int pos;
    char doAgain;

    do {
        // get the itemCode to search for
        cout << "\nEnter an item code: ";
        cin  >> desiredCode;

        // search for the object
        pos = search(silverware, SIZE, desiredCode);

        // if pos =-1, the code was not found
        if (pos == -1)
            cout << "That code does not exist in the array\n";
        else {
            // the object was found, so use pos to get the
            // description and price
            cout << "This " << silverware[pos].getDescription()
                 << " costs $ " << silverware[pos].getPrice() << endl;
        }

        // does the user want to look up another price?
        cout << "\nLook up another price (Y/N)? ";
        cin >> doAgain;
    } while (doAgain == 'Y' || doAgain == 'y');
    return 0;
}

/*
**                          search                           
** this function performs a linea search on an array of
** Inventory objects, using itemCode as the key field.
** If the desired code is found, its array subscript is
** returned. Otherwise, -1 is returned.
*/
int search(const Inventory object[], int size, string value) {
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found) {
        if (object[index].getCode() == value) {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}