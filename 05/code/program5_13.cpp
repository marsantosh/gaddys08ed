#include <iostream>
using namespace std;

int main() {
    // vars
    int numStudents,
        numTests;
    double average;

    // get the number of students
    cout << "This program averages test scores.\n";
    cout << "How many students are there? ";
    cin >> numStudents;

    // get the number of test scores per student
    cout << "How many test scores does each student have? ";
    cin >> numTests;
    cout << endl;

    // read each student's scores and compute their average
    for (int snum = 1; snum <= numStudents; snum++) {
        double total = 0.0;
        
        for (int test = 1; test <= numTests; test++) {
            int score;
             
             // read a score and add it to the accumulator
             cout << "Enter score " << test << " for ";
             cout << "student " << snum << ": ";
             cin >> score;
             total += score;
        }

        // compute and display the student's average
        average = total / numTests;
        cout << "The average score for student " << snum;
        cout << " is " << average << "\n\n";
    }

    return 0;
}