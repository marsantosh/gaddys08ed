// this program demonstrates the use of dfault function arguments
#include<iostream>
using namespace std;

void displayStars(int starsPerRow = 10, int numRows = 1);

int main() {
    // main function
    displayStars();
    cout << endl;

    displayStars(5);
    cout << endl;

    displayStars(7, 3);
    cout << endl;
    
    return 0;
}

void displayStars(int starsPerRow, int numRows) {
    // nested loop. The outer loop controls the rows and
    // the inner loop controls the number of stars per row.
    for (int row = 1; row <= numRows; row++) {
        for (int star = 1; star <= starsPerRow; star++)
            cout << '*';
        cout << endl;
    }
}
