// environ_vars.cpp
// this program prints its environment variables
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    extern char **environ;

    int k = 0;
    while (environ[k] != 0) {
        // print the string
        cout << environ[k] << "\n";
        k++;
    }

    return 0;
}