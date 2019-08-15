// this program illustrates the use of constructors
// and destructors in the allocation and deallocation of memory
#include <iostream>
#include <string>
using namespace std;

class Squares {
    private:
        int length;
        int *sq;
    public:
        // constructor allocates storage for sequence
        // of squares and creates the sequence
        Squares(int len) {
            length = len;
            sq = new int[length];
            for (int k = 0; k < length; k++) {
                sq[k] = (k + 1) * (k + 1);
            }
            // trace
            cout << "Construct an object of size " << length << endl;
        }

        // print the sequence
        void print() {
            for (int k = 0; k < length; k++)
                cout << sq[k] << "  ";
            cout << endl;
        }

        // destructor deallocates storage
        ~Squares() {
            delete [ ] sq;
            // trace
            cout << "Destructor for object of size " << length << endl;
        }
};

void outputSquares(Squares *sqPointer) {
    cout << "The list of squares is: ";
    sqPointer->print();
}

int main() {
    Squares sqs(5);
    cout << "The first 5 squares are: ";
    sqs.print();

    // main allocates a Squares object
    Squares *sqPointer = new Squares(3);

    // output the squares list
    outputSquares(sqPointer);

    // main deallcoates the squares object
    delete sqPointer;

    return 0;
}