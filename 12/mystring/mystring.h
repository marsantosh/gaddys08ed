#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

const int SIZE = 256;


class MyString {
    private:
        char *str;
        int len;
    public:
        // constructors
        MyString() { str = new char[1]; str[0] = '\0'; len = 0; }
        MyString(const char *);
        MyString(const MyString &);

        // destructor
        ~MyString() { if (len != 0) delete [] str; }

        // various member functions and operators
        int length() const { return len; }
        char *getValue() { return str; }
        MyString operator+=(MyString );
        MyString operator=(MyString );

        // various overloaded operators
        friend bool operator==(MyString, MyString);
        friend bool operator!=(MyString, MyString);
        friend bool operator>(MyString, MyString);
        friend bool operator<(MyString, MyString);
        friend bool operator>=(MyString, MyString);
        friend bool operator<=(MyString, MyString);
        friend ostream & operator<<(ostream &, MyString );
        friend istream & operator>>(istream &, MyString &);
};

#endif
