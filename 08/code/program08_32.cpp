// this program lets the user play a game of rock, paper,scissors
// with the compyter, The cmputer's choices are randomly generated
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

const string name[4] = { " ", "rock", "paper", "scisors" };

int main() {
    int computerChoice,
        playerChoice,
        computerPoints = 0,
        playerPoints = 0;
    
    srand(time(NULL));

    playerPoints = 0;
    computerPoints = 0;

    cout << "Let's play Rock-Paper-Scissors!\n";
    cout << "The first player to score 5 points wins.\n\n";

    do {
        // generate a random number 1 to 3to simulate computer choice
        computerChoice = 1 + rand() % 3;

        // get player's choice
        cout << "Pick 1 (rock), 2 (paper), or 3 (scissors): ";
        cin  >> playerChoice;

        if (computerChoice == playerChoice) {
            cout << "I choose " << name[computerChoice]
                 << " too, so we tied.\n\n";
        }
        else if ((playerChoice == 1 && computerChoice == 2) || // computer wins
                 (playerChoice == 2 && computerChoice == 3) ||
                 (playerChoice == 3 && computerChoice == 1)) {
            cout << "I chose " << name[computerChoice] << ", so I win! "
                 << name[computerChoice] << " beats "
                 << name[playerChoice] << ".\n\n";
            computerPoints++;
        }
        else {
            cout << "I chose " << name[computerChoice] << ", so you win! "
                 << name[playerChoice] << " beats "
                 << name[computerChoice] << ".\n\n";
            playerPoints++;
        }
    } while (playerPoints < 5 && computerPoints < 5);

    cout << "Let's see how you did :\n"
         << "You won " << playerPoints << " points and I won "
         << computerPoints << " points.\n";
    if (playerPoints == 5)
        cout << "Congratulations! You're the camp!\n";
    else
        cout << "Hurray for me! I'm the champ!\n";

    return 0;
}