# Stack and Heap
There are two widely-used memory allocation techniques: automatic allocation and
dynamic allocation. Commonly, there is a corresponding region of memory for each:
the __stack__ and the __heap__.

## Stack
The __stack__ always allocates memory in a _sequential fashion_. It can do so
because it requires to release the memory in the reverse order (First-In, Last-Out: FILO).
This is the memory allocation technique for local variables in many programming languages.
It is very, very fast because it requires minimal bookkeeping and the next
address to allocate is implicit.

In `C++`, this is called _automatic storage_ because the storage is claimed automatically
at the end of scope. As soon as execution of current code block (delimited using `{}`) is
completed, memory for all variables in that block is automatically collected. This is
also the moment where _destructors_ are invoked to clean up resources.

## Heap
The heap allows for a more flexible memory allocation mode. Bookkeeping is more complex
and allocation is slower. Befcause there is no implicit release point, you must release
the memory manually, using `delete` or `delete[]` (`free` in C). However, the
abscence of an implicit release point is the key to the __heap's__ flexibility.


## Reasons to use dynamic allocation
Even if using the heap is slower and potentially leads to memory leaks or memory framgemntation,
there are perfectly good use cases for dynamic allocation, as it's less limited.

Two key reasons to use dynamic allocation:
 - You don't knwo how much memory you need at compile time. For instance, when reading
   a text file into a string, you usually don't know what size the file has, so you
   can't decide how much memory to allcoate until you run the program.

 - You want to allocate memory which will persist after leaving the current block.
   For instace, you may want to write a function `string readfiile(string path)` that
   returns the contents of a file. In this case, even if the stack could hold the entire
   file contents, you could not return from a function and keep the allocated memory block.

## Why dynamic allocation is often unnecesary
In C++ there's a neat construct called a destructor. This mechanism allows you to manage resources by aligning the lifetime of the resource with the lifetime of a variable. This technique is called RAII and is the distinguishing point of C++. It "wraps" resources into objects. std::string is a perfect example. This snippet:

```C++
int main(int argc, char* argv[]) {
    std::string origran(argv[0]);
}
```

actually allocates a variable amount of memory. The `std::string` object allocates memory using the heap and releases it in its destructor. In this case, you did not need to manually manage any resources and still got the benefits of dynamic memory allocation.

In particular, it implies that in this snippet:

```C++
int main(int argc, char* argv[]) {
    std::string * program = new std::string(argv[0]); // bad!
    delete program;
}
```

there is unneeded dynamic memory allocation. The program requires more typing and introduces
the risk fo forgetting to deallocate the memory. It does this with no apparent benefit.

## Why you should use automatic storage as often as possible
Basically, the last paragraph sums it up. Using automatic storage as often
as possible makes your programs:
 - faster tot type;
 - faster when run;
 - less prone to memory/resource leaks
 