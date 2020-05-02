// word_transformation.cpp
// this program solves the word transformation puzzle.
/*
    1. The program must be able to determine if one of a given pair of words can be transformed
    into another.

    2. The program must be able to determine if one word results from another by swapping an
    adjacent pair of letters.

    3. The program must be able to produce a proof sequence when transformation of one
    word into another is possible.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// prototype
void sort(char str[], int size, vector<int>& transpositions);

int main() {
    // the two words and a copy of the first word
    char str1[] = "asac";
    char str1Copy[] = "asac";
    char str2[] = "casa";

    // these vectors hold the list of transpositions
    vector<int> transpose;
    vector<int> reverse_transpose;

    // sort the two words
    cout << "The first word is " << str1 << endl
         << "The second word is " << str2 << endl;
    
    sort(str1, 4, transpose);
    sort(str2, 4, reverse_transpose);

    // apply the first lisr of transpositions
    cout << "The transformation steps are: " << endl;
    cout << str1Copy << " ";
    for (unsigned k = 0; k < transpose.size(); k++) {
        int index = transpose[k];
        swap(str1Copy[index], str1Copy[index + 1]);
        cout << str1Copy << " ";
    }

    // apply the second list of transpositions in the reverse order
    for (int k = static_cast<int>(reverse_transpose.size()) - 1; k >= 0; k--) {
        int index = reverse_transpose[k];
        swap(str1Copy[index], str1Copy[index + 1]);
        cout << str1Copy << " ";
    }
    cout << endl;
    return 0;
}


/*
 * this is a version of BubbleSort that saves a list of all
 * transpositions that are needed to sort the list
 */
void sort(char str[], int size, vector<int>& transpositions) {
    // last index of portion yet to be sorted
    int upperBound = size - 1;

    while (upperBound > 0) {
        for (int k = 0; k < upperBound; k++) {
            if (str[k] > str[k + 1]) {
                // save the swap index
                transpositions.push_back(k);
                swap(str[k], str[k + 1]);
            }
        }
        upperBound --;
    }
}