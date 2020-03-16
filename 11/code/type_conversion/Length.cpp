// Length.cpp
#include "Length.h"

// operator double converts Length to a double
Length::operator double() const {
    return len_inches / 12 + (len_inches % 12) / 12.0;
}

// overloaded stream insertion operator << 
ostream &operator<<(ostream &out, Length a) {
    out << a.getFeet() << " geet, " << a.getInches() << " inches";
    return out;
}