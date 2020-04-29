# Polymorphisms and Virtual Functions
It often makes sense to create a new class based on an
existing class if the new class is a special version of the existing one. The derived class can
then itself serve as the base class for other classes, resulting in an inheritance hierarchy.


### Type Compatibility in Inheritance
Certain type compatibility relationships hold among different classes in an inheritance
hierarchy. Because objects in an inheritance hierarchy are commonly accessed through pointers,
we state these rules in terms of pointers.

 - A _derived class pointer can always be assigned to a base class pointer._ This means
   that base class pointers can point to derived class objects.
 - A _type cast is required to perform the opposite assignment of a base class pointer_
   _to a derived class pointer_. An error may result at run time if the base class pointer
   does not actually point to a derived class object.

A function that is declared as
taking a pointer to a base class will accept a pointer to a derived class object as an actual
parameter. Also, a function that declares a return type of a pointer to a particular class C
may actually return a pointer to on object of a class derived from C.


## Polymorphisms and Virtual Member functions
Virtual functions allow the most specific version of a member function in an
inheritance hierarchy to be selectef for execution. Virtual functions make
polymorphisms possible.

_Virtual_ functions are used in C++ to support polymorphic behaviour.
```
class B {
    public:
        virtual void mfun() {
            cout << "Base class version";
        }
}
```

The virtual characteristic is inherited: that is, if a member function of a derived class
overrides a virtual function in the base class, then that member function is automatically
virtual itself. Thus the declaration of mfun as virtual in B makes mfun virtual in D and in all
classes derived from D .

Although it is not necessary, many programmers tag all virtual functions with the key word
virtual to make it easer to identify them. This is good practice, and accordingly, the
definition of D should be written as follows:

```
class D: public B {
    public:
        virtual void mfun() {
            cout << "Derived class version";
        }
}:
```


### Dynamíc and Static Binding
The compiler is said to _bind_ the name of a function when it selects the code that
should be executed when the funcion name is invoked.
_Static binding_ happends at compile time and binds the name to a fixed function
definition, which is then executed each time the name is invoked. 

In _static binding_ the compiler uses type information available at compile time.
If the code is operating on objects of different classes within an inheritance hierarchy,
the only type information available to the compuler will be the base class
pointer type used to access all the objects. Consequently, _static binding_ will
always use the base class version of a member function.


In contrast, _dynamic binding_ occurs at run time. Dynamic binding works only
of the compiler can determine at run time the exact class that a sublcass object belongs to.
The compiler then uses this run-time tpye information to call the version
of the function defined in that class.
To make dynamic binding possible, the compiler stores run-time information in
every object of a class with a virtual function. _Dynamic binding_ always uses the version
of the member function in the actual class of the object, regardless of the class of the
pointer used to access the object.


## Abstract Base Classes and Pure Virtual Functions
Abstract classes and pure virtual functions acan be used to define an interface that must
be implemented by derived classes.

The C++ language permits the programmer to declare the function a pure virtual function, that is, a
member function for which the class provides no implementation.
The C++ way of declaring a pure virtual function is to put the expression = 0 in the class
declaration where the body of the function would otherwise have gone.
For example, if a member function
void draw() is being declared pure virtual, then its declaration in its class looks like

```
void draw() = ;
```

A pure virtual function is sometimes called an bastract function, and a class with at least
one pure virtual function is called an abstract class.
The C++ compiler will not allow you
to instantiate an abstract class. Abstract classes can only be subclassed: that is, you can
only use them as base classes from which to derive other classes.
A class derived from an abstract class inherits all functions in the base class and will itself
be an abstract class unless it overrides all the abstract functions it inherits.

 - When a class contains a pure virtual function, it is an abstract base class.
 - Abstract base classes cannot be instantiated.
 - Pure virtual functions are declared with the = 0 notation, and have no body, or definition.
 - Pure virtual functions must be overridden in derived classes that need to be instantiated.


## Composition versus Inheritance
Inheritance should model an "is-a" relation, rather than a "has-a" relation,
between the derived and base classes.

_Class inheritance_ in an object-oriented language should be used to model the fact that the
type of the derived class is a special case of the type of the base class. Actually, a class can
be considered to be the set of all objects that can be created from it.

_Class composition_ occurs whenever a class contains an object of another class as one
of its member variables. _Composition_ can be viewed as a _has a_ relation between classes.

It is a good design practice to prefer composition to
inheritance whenever possible. One reason is that inheritance breaks the encapsulation
of the base class by exposing the base class’s protected members to the methods of the
derived class.

