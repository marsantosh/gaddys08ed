// hanoi.cpp
// this program displays a solution to the Towers of
// Hanoi game.

#include <iostream>
using namespace std;

// function prototype
void moveDisks(int, string, string, string);

int main() {
    // play the game with 3 disks
    moveDisks(4, "peg 1", "peg 3", "peg 2");
    cout << "All the disks habe been moved!" << endl;

    return 0;
}

/*
 * moveDisks <- function
 * displays disk moves used to solve the Towers of Hanoi game.
 * parameters:
 *      n       : number of disks to move
 *      source  : peg to move from
 *      dest    : the peg to move to
 *      temp    : the temporary peg
 */
void moveDisks(int n, string source, string dest, string temp) {
    if (n > 0) {
        // move n - 1 disks from sourcce to tmep
        // using dest as the temporary peg
        moveDisks(n - 1, source, temp, dest);

        // move a disk from source to dest
        cout << "Move a disk from " << source
             << " to " << dest << endl;
        
        // move n - 1 disks from tempt to dest
        // using source as the temporary peg
        moveDisks(n - 1, temp, dest, source);
    }
}