// this program uses a prvate Boolean function to determine if
// a new value to it is the largest value received so far
#include <iostream>
using namespace std;


class SimpleStat {

    private:
        int largest;
        int sum;
        int count;

        bool isNewLargest(int);
    
    public:
        SimpleStat();
        bool addNumber(int);
        double getAverage();

        int getLargest() {
            return largest;
        }

        int getcount() {
            return count;
        }
};

// SimpleStat default Constrcutor
SimpleStat::SimpleStat() {
    largest = sum = count = 0;
}

// SimpleStad::addNumber
bool SimpleStat::addNumber(int num) {
    bool goodNum = true;
    if (num >= 0) {
        sum += num;
        count++;
        if (isNewLargest(num))
            largest = num;
    }
    else
        goodNum = false;
    
    return 0;
}

bool SimpleStat::isNewLargest(int num) {
    if (num > largest)
        return true;
    else
        return false;
}

double SimpleStat::getAverage() {
    if (count > 0)
        return static_cast<double>(sum) / count;
    else
        return 0;
}

int main() {
    int num;
    SimpleStat statHelper;

    cout << "Please enter the set of non-negative integer \n";
    cout << "values you want to average. Separate them with \n";
    cout << "spaces and enter -1 after the alst value. \n\n";

    cin >> num;
    while (num >= 0) {
        statHelper.addNumber(num);
        cin >> num;
    }

    cout << "\nYou entered " << statHelper.getcount() << " values. \n";
    cout << "The largest value was " << statHelper.getLargest() << endl;
    cout << "The average value was " << statHelper.getAverage() << endl;

    return 0;
}