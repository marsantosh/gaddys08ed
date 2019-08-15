// this program correctly averages 3 test scores
#include <iostream>
#include <iomanip>


int main() {
    // main
    int score1, score2, score3;
    double average;

    // get the three tests scores
    std::cout << "Enter 3 test scores and I will average them: ";
    std::cin >> score1 >> score2 >> score3;

    // calculate and display average score
    average = (score1 + score2 + score3) / 3.0;
    std::cout << std::fixed << std::showpoint << std::setprecision(1);
    std::cout << "Your average is " << average << std::endl;

    // if the average equals 100, congratudlate the user
    if (average == 100) {
        std::cout << "Congratulations! ";
        std::cout << "That's a perfect score!\n";
    }
    return 0;
}