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
 - a _type cast is required to perform the opposite assignment of a base class pointer_
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
}:
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

