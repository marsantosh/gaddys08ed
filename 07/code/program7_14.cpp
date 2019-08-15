// this program demonstrates the use of a nested structure
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CostInfo {
    double food,
           medical,
           license,
           misc;
};

struct PetInfo {
    string name;
    string type;
    int    age;

    CostInfo cost;

    PetInfo() {
        name = "unkown";
        type = "unknown";
        age = 0;
        cost.food = cost.medical = cost.license = cost.misc = 0.00;
    }
};

int main() {
    // define a PetInfo structure variable called pet
    PetInfo pet;

    // assign values to the pet member variables
    // notice that cost.misc is not assigned a value,
    // so it remains 0, as set by the constructor
    pet.name = "Sassy";
    pet.type = "cat";
    pet.age = 5;
    pet.cost.food = 300.00;
    pet.cost.medical = 200.00;
    pet.cost.license = 7.00;

    // display the total annual costs for the pet
    cout << fixed << showpoint << setprecision(2);
    cout << "Annual costs for my " << pet.age << "-year-old "
         << pet.type << " " << pet.name << " are $ "
         << (pet.cost.food + pet.cost.medical + pet.cost.license + pet.cost.misc) << endl;
    
    return 0;
}