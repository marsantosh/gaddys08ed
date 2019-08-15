// this program finsd the probability of winning a "mini" lottery
// when the user's set of numbers must exactly match the set drawn
// by the lottery organizers. In addition to ain, it uses three functions.
#include <iostream>
#include <iomanip>
using namespace std;


// function prototypes
void getLotteryInfo(int&, int&);
long int computeWays(int, int);
long int factorial(int);


int main() {
    // main function
    int pickFrom,
        numPicks;
    long int ways;

    cout << "This program will tell you your probability of "
         << "winning \"Little Lotto\". \n";
    getLotteryInfo(pickFrom, numPicks);
    ways = computeWays(pickFrom, numPicks);

    cout << fixed << showpoint << setprecision(4);
    cout << "\nYour chance of winning the lottery is "
         << "1 chance in " << ways << ".\n";
    cout << "This is a probability of " << (1.0 / ways) << "\n";
    return 0;
}

void getLotteryInfo(int &pickFrom, int &numPicks) {
    /*
       getLotteryInfo
     * Gets and validates lottery info. from the user and places it in *
     * reference parameters referencing variables in the main function.

     * args:
     *    pickFrom
     *    numPicks
     * returns:
     *    void
     */
    cout << "\nHow many numbers (1-12) are there to pick from? ";
    cin >> pickFrom;

    while (pickFrom < 1 || pickFrom > 12) {
        cout << "There must be between 1 and 12 numbers.\n"
             << "How many numbers (1-12) are there to pick from? ";
        cin  >> pickFrom;
    }

    cout << "How many numbers must you pick to play?";
    cin >> numPicks;

    while (numPicks < 1 || numPicks > pickFrom) {
        if (numPicks < 1)
            cout << "You must pick at least one number.\n";
        else
            cout << "You must pick " << pickFrom << " or fewer numbers.\n";
        
        cout << "How many numbers must you pick to play? ";
        cin >> numPicks;
    }
}


/*
 * Note that the computation is done ina  way that does not
 * require multiplying factorials together. This is done to prevent
 * any intermediate result becoming so large that is causes overflow.
 */
long int computeWays(int n, int k) {
    /*
     * computes and returns the number of different possible sets
     * of k numbers that can be chosen from a set of n numbers.
     */
    return ( factorial(n) / factorial(k) / factorial(n - k) );
}

/*
 * Notice that if number equals 0, the loop condition will
 * initially be false and the loop will never be executed.
 * this will, correctly, leave factTotal = 1.
 */
long int factorial(int number) {
    long int factTotal = 1;

    for (int count = number; count >= 1; count--) {
        factTotal *= count;
    }
    return factTotal;
}
