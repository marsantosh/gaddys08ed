// crypt_app.cpp
// this program demonstrates an application
// of pure virtual functions
#include <iostream>
#include <fstream>
using namespace std;


class Encryption {
    protected:
        ifstream inFile;
        ofstream outFile;
    public:
        Encryption(char *inFileName, char *outFileName);
        ~Encryption();
        // pure virtual function
        virtual char transform(char ch) const = 0;
        // do the actual work
        void encrypt();
};


// constructor opens the input and output file
Encryption::Encryption(char *inFileName, char *outFileName) {
    inFile.open(inFileName);
    outFile.open(outFileName);
    
    if (!inFile) {
        cout << "The fiile " << inFileName
             << "cannot be opened.";
        exit(1);
    }

    if (!outFile) {
        cout << "The file " << outFileName
             << " cannot be opened.";
        exit(1);
    }
}


// destructor closes files
Encryption::~Encryption() {
    inFile.close();
    outFile.close();
}


// Encrypt function uses the virtual transform member function
// to transform individual characters
void Encryption::encrypt() {
    char ch;
    char transCh;
    inFile.get(ch);

    while (!inFile.fail()) {
        transCh = transform(ch);
        outFile.put(transCh);
        inFile.get(ch);
    }
}


// the subclass sumply overides the virtual
// transofrmation function
class SimpleEncryption: public Encryption {
    public:
        char transform(char ch) const {
            return ch + 1;
        }
        SimpleEncryption(char *inFileName, char *outFileName): Encryption(inFileName, outFileName) {}
};


// main
int main() {
    char inFileName[80], outFileName[80];
    cout << "Enter name of file to encrypt: ";
    cin >> inFileName;
    cout << "Enter name of file to receive "
         << "the encrypted text: ";
    cin >> outFileName;
    SimpleEncryption obfuscate(inFileName, outFileName);
    obfuscate.encrypt();
    return 0;
}