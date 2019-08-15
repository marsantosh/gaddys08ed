// this program uses an if/else if statement to assign a letter
// grade of A, B, C, D or F to a numeric test score. Atrailing else is
// used to set a flag if a negative value is entered
#include <iostream>

int main() {
    // create named constants to hold minimum scores rquitred
    // for each letter grade
    const int   MIN_A_SCORE = 90,
                MIN_B_SCORE = 80,
                MIN_C_SCORE = 70,
                MIN_D_SCORE = 60,
                MIN_POSSIBLE_SCORE = 0;
    
    int testScore;      // holds a numberic test score
    char grade;         // holds a letter grade
    bool goodScore = true;

    // get the numeric score
    std::cout << "Enter your numeric test score and I will\n";
    std::cout << "tell you the letter grade you earned: ";
    std::cin >> testScore;

    // determine the letter grade
    if (testScore >= MIN_A_SCORE)
        grade = 'A';
    else if (testScore >= MIN_B_SCORE)
        grade = 'B';
    else if (testScore >= MIN_B_SCORE)
        grade = 'C';
    else if (testScore >= MIN_D_SCORE)
        grade = 'D';
    else if (testScore >= MIN_POSSIBLE_SCORE)
        grade = 'F';
    else
        goodScore = false;      // the score was below 0
    
    // display the lleyer grade
    if (goodScore)
        std::cout << "Your grade is " << grade << ".\n";
    else
        std::cout << "The score cannot be below zero.\n";
    
    // return success
    return 0;
}