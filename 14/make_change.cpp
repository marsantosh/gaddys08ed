// make_change.cpp
// this program demonstrates a recursive function that finds
// and counts all possible combinations of coin values to
// make a specified amount of change

#include <iostream>
using namespace std;

const int COIN_SET_SIZE = 6;
const int coinValues[] = {1, 5, 10, 25, 50, 100};

// function prorotype
int mkChange(int, int);


int main() {
    // display possible coin values
    cout << "Here are the valid coin values, in cents: ";
    for (int index = 0; index < COIN_SET_SIZE; index++) {
        cout << coinValues[index] << " ";
    }
    cout << endl;

    // get input from user
    int amount;
    cout << "Enter the amount of cents to make change for: ";
    cin >> amount;

    // compute and display number of ways to make change
    cout << "Number of possible combinations is "
         << mkChange(amount, COIN_SET_SIZE - 1)
         << endl;
        
    return 0;
}


/*
 * mkChange <- function
 * returns the number of ways to make change
 * for an amont if we can only use coinValues in the array
 * positions 0 through largestIndex
 */
int mkChange(int amount, int largestIndex) {
    // don't use coin values biggeer than amount
    while (coinValues[largestIndex] > amount) {
        largestIndex--;
    }

    // discard arbitrary cases
    if  (amount == 0 || largestIndex == 0) {
        return 1;
    }

    // number of ways to make change for amount
    int nWays = 0;

    // number of coins of largest index to use
    int nCoins = 0;

    while (nCoins <= amount / coinValues[largestIndex]) {
        int amountLeft;
        amountLeft = amount - nCoins * coinValues[largestIndex];

        // add the nubmer if ways to make change with nCoins
        // of the largest index
        nWays = nWays + mkChange(amountLeft, largestIndex - 1);

        nCoins++;
    }
    return nWays;
}