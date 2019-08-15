// this program writes data to a file
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // stream
    ofstream outputFile;

    // iopen the output file
    outputFile.open("demofile.txt");

    cout << "Now writing data to the file.\n";

    // write four names tot he file
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    // close the file
    outputFile.close();

    cout << "Done.\n";
    return 0;
}