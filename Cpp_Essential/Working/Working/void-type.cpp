// void-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// void used to specify lack of value for function parameters and function returns
void func ( void ) {
    puts("this is void func ( void )");
}

// In C, an empty parameter function can still take values as parameters. In C, the void type is used to indicate that the function doesn't take a parameter.
// However, in C++, a function with an empty parenthesis will not take any values unlike C
int main() {
    puts("calling func()");
    func();
    return 0;
}

