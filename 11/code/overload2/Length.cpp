// Length.cpp
#include "Length.h"

/*
 * overloaded operator +
 */
Length operator+(Length a, Length b) {
    return Length(a.len_inches + b.len_inches);
}


/*
 * overloaded operator -
 */
Length operator-(Length a, Length b) {
    return Length(a.len_inches - b.len_inches);
}


/*
 * overloaded operator ==
 */
bool operator==(Length a, Length b) {
    return a.len_inches == b.len_inches;
}


/*
 * overloaded operator <
 */
bool operator<(Length a, Length b) {
    return a.len_inches < b.len_inches;
}

