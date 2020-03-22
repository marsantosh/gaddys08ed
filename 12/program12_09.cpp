// program12_09.cpp
// this program illustrates the use of sstream objects
#include <sstream>
#include <iostream>
#include <string>
using namespace std;


int main() {
    string str = "John 20 50";
    const char *cstr = "Amy 30 42";
    istringstream istr1(str);
    istringstream istr2;
    ostringstream ostr;

    string name;
    int score1, score2, average_score;

    // read name and scores and compute average then write to ostr
    istr1 >> name >> score1 >> score2;
    average_score = (score1 + score2) / 2;
    ostr << name << " has average score " << average_score << "\n";

    // set istr2 to read from the C string and repeat the above
    istr2.str(cstr);
    istr2 >> name >> score1 >> score2;
    average_score = (score1 + score2) / 2;
    ostr << name << " has average score " << average_score << "\n";

    // switch to hexadecimal output on ostr
    ostr << hex;

    // write Amy's score in hexadecimal
    ostr << name << "'s scores in hexadecimal are: " << score1
         << " and " << score2 << "\n";
    
    // extract the string from ostr and print it to the screen
    cout << ostr.str();

    return 0;
}