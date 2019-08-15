// this program reads data from a file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // objects
    ifstream inputFile;
    string name;

    // open the input file
    inputFile.open("Friends.txt");

    cout << "Reading data from the file.\n";

    inputFile >> name;
    cout << name << endl;

    inputFile >> name;
    cout << name << endl;

    inputFile >> name;
    cout << name << endl;

    inputFile.close();
    return 0;
}