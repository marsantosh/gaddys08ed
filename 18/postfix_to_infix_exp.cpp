// postfix_to_indix_exp.cpp
// this program converts postfix expressions to infix
#include <string>
#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

string postfixExpr(istream & inputStream);

int main() {
    string input;
    cout << "Enter a postfix expression to convert to infix, "
         << "\nor a blank line to quit the program:";
    getline(cin, input);
    while (input.size() != 0) {
        // convert string to a string stream
        istringstream inputExpr(input);
        cout << "The infix equivalent is "
             << postfixExpr(inputExpr) << endl;
        cout << "Enter a postfix expression to evaluate: ";
        getline(cin, input);
    }
    return 0;
}


/*
 * takes an istream that contains a single postfix expression p
 * and returns a string representing the infix equivalent of p
 */
string postfixExpr(istream & in) {
    // holds intermediate values in computation
    stack<string> infixStack;
    // used to read characters in the expression
    char ch;
    // used to read numbers int he expression
    int number;
    // used to remove infix expressions from the stack
    string lExpr, rExpr;

    ch = in.peek();
    while (ch != EOF) {
        // if we have a whitespace character skip it and
        // continue with the next iteration of this loop
        if (isspace(ch)) {
            ch = in.get();
            ch = in.peek();
            continue;       // go back to top of loop
        }

        // nonspace character is next in input stream
        // if the nexxt character is a number, read it, convert
        // to string, and push the string onto the indix stack
        if (isdigit(ch)) {
            in >> number;
            // use to convert number to string
            ostringstream numberStr;
            // convert number to string using stream
            numberStr << number;
            // push the string representing the expression onto the stack
            infixStack.push(numberStr.str());
            ch = in.peek();
            continue;
        }

        // if the next character is an operator,
        // pop the two top inix expressions stored on the 
        // stack, put the operator between the two indix expressions,
        // and then push the result on the stack
        rExpr = infixStack.top();
        infixStack.pop();
        lExpr = infixStack.top();
        infixStack.pop();
        if (ch == '+' || ch == '-' ||  ch == '*' || ch == '/')
            infixStack.push("(" + lExpr + " " + ch + " " + rExpr + ")");
        else {
            cout << "Error in the input expression" << endl;
            exit(1);
        }
        ch = in.get();
        ch = in.peek();
    }
    return infixStack.top();
}