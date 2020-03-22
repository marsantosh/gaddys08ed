// program12_11.cpp
// this program uses a function to copy
// a string into an array
#include <iostream>
using namespace std;


// function prototype
void stringCopy(char[], const char[]);

int main() {
    // defines two arrays of char
    const int S_LENGTH = 30;
    char dest[S_LENGTH], source[S_LENGTH];

    // read a string into a source array
    cout << "Enter a string with no more than "
         << S_LENGTH - 1 << " characters:\n";
    cin.getline(source, S_LENGTH);

    // copy it into a destinaiton array and print
    stringCopy(dest, source);
    cout << "The string you entered is:\n" << dest << endl;
    
    return 0;
}

/*
 *          definition of the stringCopy function
 * this function accepts two character arrays as
 * arguments. The function assumes the two arrays contains
 * C-strings. The contents of the second array are copied to the
 * first array.
 */
void stringCopy(char destStr[], const char sourceStr[]) {
    int index = 0;

    // copy one character at a time till we come to
    // the null terminator
    while (sourceStr[index] != '\0') {
        destStr[index] = sourceStr[index];
        index++;
    }
    
    destStr[index] = '\0';
}

/*
Notice the function stringCopy in Program 12-11 does not accept an argument indicating
the size of the arrays. It simply copies the characters from the source string to the destination
until it encounters a null terminator in the source string. When the null terminator is found,
the loop has reached the end of the C-string
*/