// this program prints "today's" date
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() {
    time_t epSeconds;
    tm *pCalendarTime;

    // array of weekday names
    string wDay[] = {
        "sunday", "monday", "tuesday", "wednesday",
        "thursday", "friday", "saturday"
    };

    // array of month names
    string month[] = {
        "january", "february", "march", "april",
        "may", "june", "july", "august", "september",
        "october", "november", "december"
    };

    epSeconds = time(NULL);
    pCalendarTime = localtime(&epSeconds);

    // print day of month and day of week
    cout << "Today is " << wDay[pCalendarTime->tm_wday]
         << " " << month[pCalendarTime->tm_mon]
         << " " << pCalendarTime->tm_mday
         << ", " << 1900 + pCalendarTime->tm_year << endl;
    return 0;
}