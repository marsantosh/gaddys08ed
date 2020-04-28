// program14_11.cpp
// this program evaluates prefix expressions
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

// functionn prototype
int prefixExpr(istream &exprStream);

int main() {
    string input;
    cout << "Enter prefix expressions to evaluate." << endl
         << "Press enter after each expression," << endl
         << "and press enter on a blank line to quit.\n\n";
    cout << "Enter a prefix expression to evaluate: ";
    getline(cin, input);
    
    while (input.size() != 0) {
        // convert string to istringstream
        istringstream exprStream(input);

        // evaluate the prefix expression
        cout << prefixExpr(exprStream) << endl;

        // get next line of input
        cout << "Enter a prefix expresion to exaluate: ";
        getline(cin, input);
    }

    return 0;
}

/*
 * prefixExpr <- function
 * takes an istream that contains a single prefix expression p
 * and returns the integer value of p
 */
int prefixExpr(istream &exprStream) {
    // peek at first non-space character in prefix expression
    char ch  = exprStream.peek();
    while (isspace(ch)) {
        ch = exprStream.get();    // read the space char
        ch = exprStream.peek();   // peek again
    }

    if (isdigit(ch)) {
        // the prefix expression is a single number
        int number;
        exprStream >> number;
        return number;
    }
    else {
        // the prefix expression is an operator followed
        // by two prefix expressions: compute values of the prefix
        // expressions

        // read the operator
        ch = exprStream.get();

        // recursively evaluate the two subexpressions
        int value1 = prefixExpr(exprStream);
        int value2 = prefixExpr(exprStream);

        // aaply the operator
        switch(ch) {
            case '+': return value1 + value2;
            case '-': return value1 - value2;
            case '*': return value1 * value2;
            case '/': return value1 / value2;
            default: cout << "Bad input expression: error" << endl;
                exit(1);
        }
    }
}