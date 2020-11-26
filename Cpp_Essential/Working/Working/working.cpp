// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    // statement is always terminated with a semi-colon
    // an expression returns a value and terminated with a semi-colon
    puts("Hello, World!");
    
    
    // An identifier can not begin with a numeral, reserved words
    // An underscore as the first character in an identifier is usually called "Private Identifiers"
    // More than one underscore is used for system level, private use
    
    int i;  // variable definition with no assigned value, be sure to assign a value before using it
    i =7; // initialized
    printf("The value is %d\n", i);
    
    
    const int j =  6; // this becomes a read-only variable with the int statement. SO you can't reassign a value to it in another function.
    printf("The value is %d\n", j);
    
    
 // POINTERS
    int x = 7;
    int *ip;  // pointer defintion, ip is a pointer that points to an int
    ip = &x;  // address of x is assigned to the pointer ip
    
    int &y = x; // integer reference named y, that refers to x. So whenever you change x, y will change.
    
    y = 42;
    
    int z = 73;
    ip = &z;
    
    //y = *ip;  in this case, this is referred to as the pointer dereference operator
    
    // Referencing is not in C, it's a C++ feature
    
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);
    printf("The value of z is %d\n", z);
    
    // Primitive Array ( C Array )
    int ia[5];
    ia[0] = 1;
    *ia = 1;
    int *ip2 = ia;
    *ip2 = 2; // assigns 2 to the first index
    ++ip2; // increments the pointer to point to the next array
    *ip2 = 3;
    *(++ip2) = 4; // incrementing a pointer and using it at the same time, shortcut

    // You can initialize an array in the new versions of C++
    int array2[5] = {1,2,2,34,5};
    
    // Primitive String
    char s[] = "String";
    char f[] ={'C','a', 'r'};
    
    // One way to print out the string
    for (int i = 0; s[i] != 0; ++i){
        printf("char is %c\n", s[i]);
    }
    
    // Another way to print out the string with pointers
    for (char * i = s; *i; ++i){
        printf("char is %c\n", *i);
    }
    
    // range based loop
    for (char c : s) {
        if (c == 0) break;
        printf("char is %c\n", c);
        
    }
    
    // Conditionals
    int p = 42;
    int r = 7;
    
    // ternary operator
    printf("The greater value is %d\n", p > r ? p : r);
    
    // SWITCH STATEMENTS
    const int iONE = 1;
    const int iTWO = 2;
    const int iTHREE = 3;
    const int iFOUR = 4;
    
    int e = 3;
    
    switch(e) {
        case iONE:
            puts("one");
            break;
        case iTWO:
            puts("two");
            break;
        case iTHREE:
            puts("three");
            break;
        case iFOUR:
            puts("four");
            break;
        default:
            puts("default");
            break;
    }
    
    // while loops
            int array[] = {1,2,3,4,5};
            int q = 0;
            
            while(q < 5){
                printf("element %d is %d\n", q, array[q]);
                ++q;
            }
    // the continue statement will go back and start a new loop
    
    // do loops
    int g = 0;
    do {
        printf("element %d is %d\n", g , array[g]);
        ++g;
    } while(g < 5);
    
    
    /*
     MORE ON FOR LOOPS
     
     // basic for loop
     for ( int i = 0; i < 5; ++i) {
        printf("i is %d\n", i);
     }
     
     for ( initialization ;  condition that needs to be passed; action after block of code is executed but before conditional is tested again (aka incrementing) ){
            
            // Block of code
     }
     
     // for loop with pointers
     for ( char * cp = string; *cp ; ++cp){
        printf("i is %c\n",  *cp);
     }
     
     */
    
    // Range based for loop -- C++ Exclusive
    int range_loop_array[5] = {1,2,3,4,5};
    
    for (int o : range_loop_array){
        // colon tells us that we are iterating through a container on the right side of the colon. Each element from the right side of the colon will be assigned to the variable on the left side of the colon
        printf("o is %d\n", o);
    }
    
    // another way to print to the console. Need <iosteam> library added to use it.
    // cout can take more memory than printf and puts, need to use it cautiously depending on the project
    cout << "Hello World" << endl;
    cout << "Hello, World! " << 2 * 7 << " another string " << endl;
    
        
    return 0;
            
}
