// this program determines whether a loan applicant qualifies for
// a special loan interest rate. It uses nested if/else statements
#include <iostream>

int main() {
    // vars
    char employed,
         recentGrad;
    
    // is the applicant employed and a recent college graduate?
    std::cout << "Answer the followeing questions\n";
    std::cout << "with either Y for Yes or N for No.\n";
    std::cout << "Are you employed? ";
    std::cin >> employed;
    std::cout << "Have you graduated from college in the past two years?";
    std::cin >> recentGrad;

    // determine the applicant's load qualifications
    if (employed == 'Y'){
        if (recentGrad == 'Y') {
            std::cout << "You qualify for the special interest rate.\n";
        }
        else {
            std::cout << "You must have graduated from college in the past\n";
            std::cout << "two years to qualify for the special interest rate.\n";
        }
    }
    else {
        std::cout << "You must be employed to qualify for the "
                  << "special interest rate.\n";
    }
    return 0;
}