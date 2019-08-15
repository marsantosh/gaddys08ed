// this program demonstrates the vector empy member function
#include <iostream>
#include <vector>
using namespace std;

// function prototype
double avgVector(vector<int>);

int main() {
    // main
    vector<int> values;
    int numValues;
    double average;

    // get the number of values to average
    cout << "How many values do you wish to average? ";
    cin  >> numValues;

    // get the values and store them in a vector
    for (int count = 0; count < numValues; count++) {
        int tempValue;
        cout << "Enter an integer value: ";
        cin  >> tempValue;
        values.push_back(tempValue);
    }

    // get the average f the values and siplay it
    average = avgVector(values);
    cout << "Average: " << average << endl;
    return 0;
}

/**
 *                  avgVector
 * this function accepts an int as its argument. If 
 * the fector contains values, the function returns the average of those values.
 * Otherwise, an error message is displayed and the function returns 0.0
 */
double avgVector(vector<int> vect) {
    int total = 0;
    double avg = 0.0;

    if (vect.empty())
        cout << "No values to average.\n";
    else {
        for (int count = 0; count < vect.size(); count++)
            total += vect[count];
        avg = static_cast<double>(total) / vect.size();
    }
    return avg;
}