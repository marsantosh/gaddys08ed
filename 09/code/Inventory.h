#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
// inventory class definition
class Inventory {
    private:
        std::string itemCode;
        std::string description;
        double price;
    public:
        Inventory()
        { itemCode = "XXX"; description = " "; price = 0.0; }

        Inventory(std::string c, std::string d, double p) {
            itemCode = c;
            description = d;
            price = p;
        }

        // add mehtods setCode, setDescription, and setPrice here

        // get functions to retrieve member variable values
        std::string getCode() const {
            std::string code = itemCode;
            return code;
        }

        std::string getDescription() const {
            std::string d = description;
            return d;
        }

        double getPrice() const {
            return price;
        }
};

#endif