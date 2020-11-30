// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;
#include <stdio.h>


// function needs to be either declared or defined before the main function is called.
// If func() is not defined before the main function. A function declaration must be implemented before such as --->    void func();

// automatic variables are stored on the stack and are temporary, so the values aren't saved from one command to another
// if you use " static ", the value from one command sticks around for the next command until the program is done executing

void func(){
    static int i = 5;
    printf("i is %d\n", ++i);
}


int main()
{
    puts("this is main()");
    func();
    func();
    func();
    func();
    
    // function pointers
    

    puts("Hello, World!");
    return 0;
}
