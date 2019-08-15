// this program calculates the number of soccer teams a ç
// youth league can create from the number of abailable
// players. It performs input validation using while loops.
#include <iostream>
using namespace std;

int main() {
    // constants fr minimum and maximum players per team
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;
    
    // variables
    int players,
        teamSize,
        numTeams,
        leftOver;
    
    // get the number of players per team
    cout << "How many players do you wish per team?\n";
    cout << "(Enter a value in the range "
         << MIN_PLAYERS << " - " << MAX_PLAYERS << "): ";
    cin >> teamSize;

    // validate the input
    while (teamSize < MIN_PLAYERS || teamSize > MAX_PLAYERS) {
        cout << "\nTeam size should be"
             << MIN_PLAYERS << " to " << MAX_PLAYERS << " players.\n";
        cout << "How many players do you wish per team? ";
        cin  >> teamSize;
    }

    // get and validate the nymber of players available
    cout << "\nHow many players are available? ";
    cin >> players;

    while (players <= 0) {
        cout << "Please enter a positive number: ";
        cin  >> players;
    }

    // calculate the bnumber of teams and number of leftover players
    numTeams = players / teamSize;
    leftOver = players % teamSize;

    // display the results
    cout << "\nThere will be " << numTeams << " teams with: ";
    cout << leftOver << " players left over.\n";
    return 0;
}