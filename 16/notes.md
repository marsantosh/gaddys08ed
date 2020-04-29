# Exceptions, Templates, and the Standard Tempalte Library (STL)
#
### Exceptions
Exceptions are used to signal errors or unexpected events that occur while
a program is running.

An exception is a value
or an object that signals an error. When the error occurs, an exception is said to be
“thrown” because control will pass to a part of the program that catches and handles that
type of error.

### Handling an Exception
To handle an exception, a progrma must have a _try/catch_ construct.
The general format of the _try/catch_ construct is:

```
try {
    // code here calls functions or object member
    // functions that might throw and exception
}
catch(exception parameter) {
    // code here handles the exception
}
// repeat as many catch blocks as eneded
```

There are two possible ways for a thrown exception to go uncaught. The first possibility is
for the program to contain no catch blocks with an exception parameter of the right data
type. The second possibility is for the exception to be thrown from outside a try block. In
either case, the exception will cause the entire program to abort execution.


C++ allows you to throw and catch
multiple exceptions. The only requirement is that each different exception be of a different
type. You then code a separate catch block for each type of exception that may be thrown
in the try block.