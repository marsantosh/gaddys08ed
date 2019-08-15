// this program encodes and decodes secret messages
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class CodeMaker {
    private:
        int size;
        char codeChar[94];
        int findIt(char[], int, char);
    public:
        CodeMaker();
        string encode(string);
        string decode(string);
};

// member function implementation section
/*
 *                  CodeMaker::CodeMaker
 * This ethod reads the substitution characters in
 * from a file and stores them it the cideChar array.
 * It also sets member variable size
 */
CodeMaker::CodeMaker() {
    size = 94;
    ifstream inFile;
    inFile.open("files/code.dat");

    for (int ascii = 32; ascii < 127; ascii++)
        inFile >> codeChar[ascii - 32];
    inFile.close();
}

/*
 *                 CodeMaker:encode
 * This nmethod encodes and returns a clear text string
 */
string CodeMaker::encode(string s) {
    int ascii;
    char newChar;
    string newString = "";

    for (unsigned pos = 0; pos < s.length(); pos++) {
        // get the original character's ASCII code
        ascii = s[pos];

        // get the new replacement character
        newChar = codeChar[ascii - 32];

        // concatenate it onto the end of the new string
        newString += newChar;
    }

    return newString;
}

/*
 *              CodeMaker::decode
 * This method convers and encoded string back to clear
 * text and returns it
 */
string CodeMaker::decode(string s) {
    int index;
    char nextChar;
    char originalChar;
    string decodedText = "";

    for (unsigned pos = 0; pos < s.length(); pos++) {
        // get the next character from the srtring
        nextChar = s[pos];

        // call findIt to find it in the array and return its index
        index = findIt(codeChar, size, nextChar);

        // fet the original character by computing its ASCII code
        originalChar = index + 32;

        // cincatenate this character onto the end of the
        // decoded text strign being constructed
        decodedText += originalChar;
    }
    return decodedText;
}

/*
 *              CodeMaker::findIT
 * this method performs a linear search on a character
 * array looking for a value.
 */
int CodeMaker::findIt(char A[], int size, char value) {
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found) {
        if (A[index] == value) {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}

/*
 *                      main
 * the client "program" that uses the CodeMaker class
 */
int main() {
    string originalText, secretCode, finalText;
    CodeMaker myCoder;

    // get text from the user
    cout << "Enter the message to be encoded.\n";
    getline(cin, originalText);

    // send the text to be encoded and display the resuñt
    secretCode = myCoder.encode(originalText);
    cout << "\nHere is the encoded message\n" << secretCode << endl;

    // send the encoded text bacl to be decoded
    // and display the result
    finalText = myCoder.decode(secretCode);
    cout << "\nHere is the decoded message: " << finalText << endl;

    return 0;    
}