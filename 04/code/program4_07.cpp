// this program uses an if/else if statement to assign
// a letter grade of A, B, C, D or F to a numberic test score.
#include <iostream>

int main() {
    // create named constants to hold minimum scores
    // required  for each letter grade
    const int MIN_A_SCORE = 90,
              MIN_B_SCORE = 80,
              MIN_C_SCORE = 70,
              MIN_D_SCORE = 60;
    
    int testScore;          // holds a numberic test score
    char grade;             // holds a letter grade

    // get numeric score
    std::cout << "Enter your numeric test score and I will\n";
    std::cout << "tell you the letter grade you earned: ";
    std::cin >> testScore;

    // determine the letter grade:
    if (testScore >= MIN_A_SCORE)
        grade = 'A';
    else if (testScore >= MIN_B_SCORE)
        grade = 'B';
    else if (testScore >= MIN_C_SCORE)
        grade = 'C';
    else if (testScore >= MIN_D_SCORE)
        grade = 'D';
    else if (testScore >= 0)
        grade = 'F';
    
    // display the letter grade
    std::cout << "Your grade is " << grade << ".\n";
    
    // return success exit
    return 0;
}