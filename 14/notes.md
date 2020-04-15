#                           __Recursion__
A Recursive function is one that calls itself.

To be useful, a recursive function must have a way of controlling the number
of recursive calls. 

Recursive functions work by breaking a complex problem down into
subproblems of the same type. This breaking down process stops when it reaches
a _base case_, that is, a subproblem that is a simple enoigh to be solved
directly.

One should consider the use of recursion when there is a way to express the
solution of a problem in terms of solutions of simpler or smaller problems 
of the same type.

__direct recursions__ directly call themselves: This is
```
function A calls function A
```
 __indirect recursions__ call themselves by
before calling another function: this is 
```
function A calls function B which
calls function A
```
There can be more than one intermediate
functions involved in indirect recursions.


### __Recursive factorial function__
The recursive factorial function accepts an argument and calculates its factorial
Its base case is when the argument is 0.

## __Recursive gcd function__
Using Euclid's algorithm, the gcd (greatest common divisor) of two positive
integers, x, and y, is
```
gcd(x, y) = y                        :: if y divides x with no reminder
          = gcd(y, reminder of x/y)  :: otherwise
```