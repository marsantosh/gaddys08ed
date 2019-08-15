// this program illustrates the use of an end sentinel.
#include <iostream>
using namespace std;

int main() {
    // vars
    int game = 1,
        points,
        total = 0;
    
    // read the points for game 1
    cout << "Enter the name of points your team has earned\n";
    cout << "so fat this season. Then enter -1 when finished.\n\n";
    cout << "Enter the points for game " << game << ": ";
    cin >> points;
    // loop as long as the end sentinel has not yet been entered
    while (points != -1) {
        // add point jjt read in to the accumulator
        total += points;

        // enter the points for the next game
        game++;
        cout << "Enter the points for game " << game << ": ";
        cin >> points;
    }

    // display the total points
    cout << "\nThe total points are " << total << endl;
    return 0;
}