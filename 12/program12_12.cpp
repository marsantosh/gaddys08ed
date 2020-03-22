// program12_12.cpp
// this program uses the function nameSlice
// to "cut" off the last name of a string that
// contains the user0s first and last names
#include <iostream>
using namespace std;


// prototypes
void nameSlice(char []);


int main() {
    // define array of char to hold name
    const int NAME_LENGTH = 41;
    char name[NAME_LENGTH];

    // get user's first and last names
    cout << "Enter your first and last names, separated ";
    cout << "by a space: \n";
    cin.getline(name, NAME_LENGTH);

    // Slice off the last name and print wjat is left
    nameSlice(name);
    cout << "Your first name is : " << name << endl;
    return 0;
}


/*
 *          definition of function nameSlice
 * this function accepts a character array as its argument.
 * it scands the array looking for a space. when it finds
 * one, it replaces it with a null terminator.
 */
void nameSlice(char userName[]) {
    // look for the end of the first name, indicated
    // by a space or a null terminator
    int k = 0;
    while (userName[k] != ' ' && userName[k] != '\0')
        k++;
    
    // insert null terminator
    if (userName[k] == ' ')
        userName[k] = '\0';
}