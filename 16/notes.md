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

#### Handling the `bad_alloc` Exception Thrown by `new`
The new operator throws a system-defined exception of type bad_alloc if it is unable to
allocate the requested storage.

If the function does not contain a catch block capable of handling the exception, control passes
out of the function, and the exception is automatically rethrown at the point of the call in the
calling function. By this process, an exception can propagate backwards along the chain of
function calls until the exception is thrown out of a try block that has a catch block that can
handle it. If no such try block is ever found, the exception will eventually be thrown out of the
main function, causing the program to be terminated. This process of propagating uncaught
exceptions from a function to its caller is called _unwinding the stack_ of function calls.

## Function Templates
A function template is a “generic” function that can work with different
data types. The programmer writes the specifications of the function, but
substitutes parameters for data types. When the compiler encounters a call
to the function, it generates code to handle the specific data type(s) used in
the call.

```c++
int square(int number) {
    return number * number
}
double square(double number) {
    return number * number;
}
```
The only differences between these two functions are the data types of their return values
and their parameters. In situations like this, it is more convenient to write a function
template than an overloaded function. Function templates allow you to write a single
function definition that works with many different data types, instead of having to write
a separate function for each data type used.

A function template is not an actual function, but a "mold" the compiler
uses to generate one or more functions. When writing a function template,
you do not have to specify actual types for the parameters, return value
or local variables. Instead, you use a _type parameter_ to specify
a generic data type. When the compiler enconunters a call to the function, 
it examines the data types of its arguments and generates the function
code that will work with those data types.

```c++
template <class T>
T square(T number) {
    return number * number
} 
```

The beginning of a function template is marked by a template prefix, which begins
with the key word template . Next is a set of angled brackets that contains one or
more generic data types used in the template. A generic data type starts with the key
word class , followed by a parameter name that stands for the data type. The example
just given only uses one, which is named T . (If there were more, they would be
separated by commas.) After this, the function definition is written as usual, except the
type parameters are substituted for the actual data type names.

NOTE:
A function template is merely the specification of a function and by itself does
not cause memory to be used. An actual instance of the function is created in memory
when the compiler encounters a call to the template function.

## Class Templates
Templates may also be used to create generic classes and abstract data types.
Function templates are used whenever we need several different functions with the same
problem-solving logic, but which differ only in the types of the parameters they work
with. Class templates can be used whenever we need several classes that only differ in the
types of some of their data members, or in the types of the parameters of their member
functions.

Declaring a class template is similar to declaring a function template: you write the class
using identifiers such as T , T1 , T2 (or whatever other identifier you choose) as generic types,
and then prefix the class declaration with an appropriately written template header.

```c++
template <class T>
class SimpleVector {
    private:
        T *aptr;
        int arraySize;
        void subError() const;
    public:
        SimpleVector() { aptr = 0; arraySize = 0; }
        SimpleVector(int);
        SimpleVector(const SimpleVector &);
        ~SimpleVector();
        int size() const { return arraySize; }
        T &operator[](int);
        void print() const;
};
```

This class template will store elements of type T in a dynamically generated array. This
explains why the pointer aptr , which will point to the base of this array, is declared to
be of type T*, a pointer to T . Likewise, the overloaded array subscription operator returns
a value of type T . Notice, however, that the size member function and the member
arraySize that represents the number of elements stored in the array are both of type
int . This makes sense because the number of elements in an array is always an integer,
regardless of the type of element the array stores.

You can think of the SimpleVector template as a generic pattern that can be specialized to
create classes of SimpleVector that hold double , long , string , or any other type that
you can define. The rule is that you form the name of such an actual class by appending a
list of the actual types, enclosed in angled brackets, to the name of the class template:
 - SimpleVector<double> is the name of a class that stores arrays of double .
 - SimpleVector<string> is the name of a class that stores arrays of string .
 - SimpleVector<char> is the name of a class that stores arrays of char .

 Defining a member function of a template class inside the class is straightforward: an
example is furnished by the definition of the default constructor in the SimpleVector
class. To define a member function outside the class, you must prefix the definition of the
member function with a template header that specifies the list of type parameters, and then
within the definition, use the name of the class template followed by a list of the type
parameters in angled brackets whenever you need the name of the class.

### Class Tempaltes and Inheritacne
Inheritance can be applied to class templates.

## Standard Template Library
In addition to its run-time library, which you have used throughout this book, C++ also
provides a library of templates. The Standard Template Library (or STL) contains
numerous templates for implementing data types and algorithms.
The most important data structures in the STL are the containers and iterators. A
container is a class that stores data and organizes it in some fashion. An iterator is an
object that works like a pointer and allows access to items stored in containers.

There are two types of container classes in the STL: sequential containers and associative
containers.

### Sequential containers
Sequential containers store items in the form of sequences, meaning that there
is a natural way to order the items by their position within the container. An array is an
example of a sequential container:
 - `vector`: A sequence of items implemented as an array that can automatically
    grow as needed during program execution. Items can be efficiently
    added and removed from the vect at its end. Insertions and removals from
    the middle or beginning of the vector are not as efficient-
 - `deque`: a sequence of items that has a front and back: items can be
    efficiently added or removed from the front and back. Insertions and
    removals in the middle of a deque are not as efficient.
 - `list`: A sequence of items that allows quick additions and removals
    from any position.

Because a sequential container organizes the items it stores as a sequence, it can be said
to have a front and a back. A container is said to provide random access to its contents
if it is possible to specify a position of an item within the container and then jump
directly to that item without first having to go through all the items that precede it in
the container.
Positions used in random access are usually specified by giving an integer specifying the
position of the desired item within the container. The integer may specify a position
relative to the beginning of the container, the end of the container, or relative to some
other position. Arrays and vectors are examples of sequential containers that provide
random access.

### Associative Containers
Sequential containers use the position of an item within the sequence to access their data.
In contrast, associative containers associate a key with each item stored, and then use the
key to retrieve the stored item. A telephone book is an example of an associative container;
the values stored are telephone numbers, and each telephone number is associated with a
name:
 - `set`: Stores a set of keys. No duplicate values are allowed.
 - `multiset`: Stores a set of keys. Duplciates are allowed.
 - `map`: Maps a set of keys to data elements. Each key is associated
    with a unique data element, and duplciate jeys are not permitted.
 - `multimap`: Maps a set of keys to data elements. The samt key may be
    associated with multiple values.

A map is a container that requires each value stored to be associated with a key. Each key
may be associated with only one value; once a key is used, no other value with the same
key may be added to the map. A multimap is like a map, except a key may be associated
with multiple values.
A set is like a map in which only keys are stored, with no associated values. No item may
be stored twice in a set: that is, duplicates are not permitted. A multi set is like a set in
which duplicates are permitted.

### Iterators
Iterators are objects that behave like pointers. They are used to access items stored in
containers. A typical iterator is an object of a class declared inside a container class. The
iterator overloads pointer operators such as the increment operator `++` , the decrement
operator `--` , and the dereferencing operator * in order to provide pointer-like behavior.
Each STL container object provides member functions `begin()` and `end()` that return the
beginning and ending iterators for the object. The `begin()` iterator points to the item at the
beginning of the container if the container is nonempty, while the `end()` iterator points to
just past the end of the container.

 - __Forward__: Can only move forward ina  container (uses the `++` operator).
 - __Bidirectional__: Can move forward or backward in a container 
    (uses the `++` and `--` operators).
 - __Random-Access__: Can move forward and backward, and can jump to a 
    specific data elemtn in a container.
 - Input: Can be used with `cin` to read information from an input devide
    or file
 - Output: Can be used with `cout` to write information to an output
    decide or a file.

