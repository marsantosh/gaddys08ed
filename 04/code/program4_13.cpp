// this program determines whether or not a n applicant qualifies
// for a loan. It uses the logical || operator
#include <iostream>

int main() {
    // consts and vars
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;
    double income;
    int years;

    // get annual income and years on the job
    std::cout << "what is your annual income? ";
    std::cin >> income;
    std::cout << "How many yeats have you worked at your current job? ";
    std::cin >> years;

    // getermine if the pplicant qualifies for a loan
    if (income >= MIN_INCOME || years > MIN_YEARS) {
        std::cout << "You qualify for a loan.\n";
    }
    else {
        std::cout << "\nYou must earn at least $" << MIN_INCOME
                  << " or have been employed \n"
                  << "for more than " << MIN_YEARS << " years "
                  << "yo qualify for a loan.\n";
    }
    return 0;
}