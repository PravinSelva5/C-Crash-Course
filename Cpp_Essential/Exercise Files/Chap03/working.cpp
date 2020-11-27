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
    
    // Reference is like a pointer but with different semantics
    // References are immmtable and once defined cannot be changed to refer to another object
    // References are used as alias'
    
    int xl = 42;
    int &rx = xl;
    printf("x is %d\n", rx);
    
    // A byte is 8 bits
    constexpr size_t byte = 8;

    printf("sizeof char is %ld bits \n", sizeof(char) * byte);
    printf("sizeof short int is %ld bits \n", sizeof(short int) * byte);
    printf("sizeof int is %ld bits \n", sizeof(int) * byte);
    printf("sizeof long int is %ld bits \n", sizeof(long int) * byte);
    printf("sizeof long long int is %ld bits \n", sizeof(long long int) * byte);
    
    
        return 0;
}
