// main.cpp
// this program demonstrates object serialization
#include "serialization.h"

int main() {
    // array of objects to store in file
    Person People[ ] = {
        Person("Josepth", 'X', "Puff", 32),
        Person("Louse", 'Y', "Me", 28)
    };

    // open a file and store the array of people
    ofstream outFile("MorePeople.dat", ios::binary);
    if (!outFile) {
        cout << "The output file cannot be opened." << endl;
        exit(1);
    }

    // store the people data in the file
    People[0].store(outFile);
    People[1].store(outFile);
    
    cout << "Data has been written to the file "
         << " 'Morepoeple.data' " << endl;
    
    // close the file
    outFile.close();
    return 0;
}