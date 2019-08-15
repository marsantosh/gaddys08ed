#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    char ch;
    int vowelCount = 0;
    string sentence;

    cout << "Enter any sentence you wish and I will \n"
         << "tell you how many vowels are in it.\n";
    getline(cin, sentence);

    for (int pos = 0; pos < sentence.length(); pos++) {
        // uppervase a copy of the next character and assign it to ch
        ch = toupper(sentence[pos]);

        // if the character is a vowel, increment vowelCount
        switch (ch) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': vowelCount++;
        }
    }
    cout << "There are " << vowelCount << " vowels in the sentence.\n";
    return 0;
}