// program12_08.cpp
// this program uses the strstr function to search an array
// of strings for a name
#include <iostream>
#include <cstring>
using namespace std;


int main() {
    const int N_ITEMS = 5, S_LENGTH = 31;
    
    // array of product descriptions
    char prods[N_ITEMS][S_LENGTH] = {
        "TV 327 31 inch Television",
        "CD257 CD Player",
        "TA677 Answering Machine",
        "CS109 Car Stereo",
        "PC955 Personal Computer"
    };

    char lookUp[S_LENGTH];      // for user input
    char *strPtr = NULL;        // result from strstr

    // get user input
    cout << "\tProduct Database\n\n";
    cout << "Enter a product number to search for: ";
    cin.getline(lookUp, S_LENGTH);

    // search for the string
    int index = 0;
    while (index < N_ITEMS) {
        strPtr = strstr(prods[index], lookUp);
        if (strPtr != NULL)
            break;
        index ++;
    }

    // output the result of the search
    if (strPtr == NULL)
        cout << "No matching product was found.\n";
    else
        cout << prods[index] << endl;
    
    return 0;
}
