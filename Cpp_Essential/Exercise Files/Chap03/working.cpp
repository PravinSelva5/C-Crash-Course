// working.cpp by Bill Weinman <http://bw.org/>
// WORKING CPP FILE FOR CHAPTER 3 - DATA TYPES

#include <cstdio>
#include <iostream>
using namespace std;


// the function returns an integer references and takes a reference as an input
int & f (int & r){
    return ++r;
}

// to make the above function and avoid any side affects that are associated with passing by reference
/*
 const int & f(const int & i){
    int _i = i; // this basically says: int local i is equal to the given i
    return ++_i;
 }
 
 // It's better to use pointers when you want to have side affects after a function call because the programmer is able to tell that a value is going to change
 
 // Only use REFERENCES when you can use 'const' like the above function

 */

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
    
    // Characters and strings
    // Concatenation strings in C++
    const char * cstring = "String" " foo";
    printf("The string is: %s\n", cstring);
    
    for ( unsigned int i = 0; cstring[i]; i++){
        printf("%02d: %c\n", i, cstring[i]);
    }
    
    // character escape sequences
    // Example to add a double quote when printing a string -->  puts ("hello world! \ " ") --> output: hello world! "
    
    
    
    // References
    // syntax for a reference defers from pointers AND DOES NOT INVOLVE USING THE ADDRESS OF OPERATOR
    // The syntax to get the value of the variable referred to by the reference DOES NOT INVOLVE USING THE DEREFERENCE OPERATOR
    // You cannot take the reference of a reference, you cannot assign a pointer to a reference, and you can't have an array of reference
    int i = 5;
    int & ir = i; // intefer reference to the variable i that points to 5
    ir  = 10;
    printf("i is %d\n", i);
    printf("f() is %d\n", f(i));
    printf("i is %d\n", i);
    
    
    return 0;
}
