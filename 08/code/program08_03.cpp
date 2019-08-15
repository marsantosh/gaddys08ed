// this process reads employee work hours from a file
// and sotres them in an int array. It uses one loo
// to input the hours and another to display them
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 16;
    int hours[NUM_EMPLOYEES];
    int count = 0;

    ifstream datafile;

    // open the data file
    datafile.open("files/work.dat");
    if (!datafile)
        cout << "Error opening data file\n";
    else {
        // read the nubmers from the file into the array. When we
        // exit the loop, count will hold the number of items read in
        while (count < NUM_EMPLOYEES && datafile >> hours[count])
            count++;

        // close the file
        datafile.close();

        // display the contents of the array
        cout << "The hours worked by each e,ployee are\n";
        for (int employee = 0; employee < count; employee++) {
            cout << "Employee " << employee + 1 << ": ";
            cout << hours[employee] << endl;
        } 
    }
    return 0;
}