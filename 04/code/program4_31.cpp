// this proram predicts the player's future using
// random bmbers and an if/else if statement
#include <iostream>
#include <string>
#include <cstdlib>


int main() {
    // strings to hold user entered careers
    std::string career1, career2, career3;

    int randomNum;

    // seed the random generator
    unsigned seed = time(0);
    std::srand(seed);

    // explain the game and get the player's career choices
    std::cout << "I am a fortune teller. Look into my crystal screen \n"
              << "and enter 3 careers you would like to have. Then I will\n"
              << "predict what you will be. \n\n";
    
    std::cout << "Career choice 1: ";
    std::getline(std::cin, career1);
    std::cout << "Career choice 2: ";
    std::getline(std::cin, career2);
    std::cout << "Career choice 3: ";
    std::getline(std::cin, career3);

    // randomly generate an integer between 1 and 4
    randomNum = 1 + std::rand() % 4;

    // use branching logic to outut the prediction
    if (randomNum == 1)
        std::cout << "\nYou will be a " << career1 << ". \n";
    else if (randomNum == 2)
        std::cout << "\nYou will be a " << career2 << ". \n";
    else if (randomNum == 3)
        std::cout << "\nYou will be a " << career3 << ". \n";
    else
        std::cout << "\nSorry. You will not be any of these. \n";
    return 0;
}