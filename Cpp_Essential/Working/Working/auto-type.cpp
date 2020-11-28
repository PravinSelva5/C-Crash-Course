// auto-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
#include <typeinfo>
using namespace std;

string func() {
    return string("this is a string");
}

int main() {
    auto x = func();    // auto type allows the variable to be assigned the appropriate type depending on the value from func()
    printf("x is %s\n", x.c_str()); // c_str return a c string from a stl string
    if(typeid(x) == typeid(string)) puts("x is string");
    return 0;
}
