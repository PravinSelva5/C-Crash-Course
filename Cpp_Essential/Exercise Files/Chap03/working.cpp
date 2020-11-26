// working.cpp by Bill Weinman <http://bw.org/>
// WORKING CPP FILE FOR CHAPTER 3 - DATA TYPES

#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    puts("Hello, World!");
    
    
    // Union - a set of overlapping objects
    union x {
        int a;
        float b;
        char word[145];
    };
    
    // A pointer is a reference to a given type
    // Pointers are strongly typed in C++
    int x = 42;
    int * px = &x;
    printf("px is %d\n", *px);
    return 0;
    
    // Reference is like a pointer but with different semantics
    // References are immmtable and once defined cannot be changed to refer to another object
    // References are used as alias'
    
    int xl = 42;
    int &rx = xl;
    printf("x is %d\n", rx);
    
    
}
