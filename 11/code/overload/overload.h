#include <iostream>
using namespace std;

class NumberArray {
    private:
        double *aPtr;
        int arraySize;
    public:
        // overloaded operator functon
        void operator=(const NumberArray &right);

        // constructors and other member function
        NumberArray(const NumberArray &);
        NumberArray(int size, double value);
        ~NumberArray() { if (arraySize > 0) delete [] aPtr; }
        void print() const;
        void setValue(double value);
};