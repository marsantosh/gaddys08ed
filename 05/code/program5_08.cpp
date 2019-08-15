// this program averages 3 test scores.
// uses a do-while loop
#include <iostream>
using namespace std;

int main() {
    int score1, score2, score3;
    double average;
    char again;

    do {
        // get tree test scotres
        cout << "\nEnter 3 scores and I will average them: ";
        cin >> score1 >> score2 >> score3;

        // calculate and display average
        average = (score1 + score2 + score3) / 3.0;
        cout << "The average is " << average << "\n\n";

        // does the user want to average another set?
        cout << "Do you want to average anothe set? (Y/N) ";
        cin >> again;
    } while (again == 'Y' || again == 'y');
    return 0;
}