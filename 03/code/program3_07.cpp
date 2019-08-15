#include <iostream>
using namespace std;

int main() {
    int     books,
            months;
    double  booksPerMonth;

    // get user inputs
    cout << "How many books do you plan to read? ";
    cin >> books;
    cout << "how many months will it take you to read them? ";
    cin >> months;

    // compute and display books read per month
    booksPerMonth = static_cast<double>(books) / months;
    cout << "That is " << booksPerMonth << " books per month.\n";
    return 0;
}