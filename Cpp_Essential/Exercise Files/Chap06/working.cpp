// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;


// Create a structure

struct A {
    int ia;
    int ib;
    int ic;
};

// If i wanted to make the same struct but with Class
// typically you want to access your data members through methods, known as accessors. You want to keep your data members private.
// Structures and Class are identical however, struct members default to PUBLIC while class members default to PRIVATE

class Aa {
public:
    int ia;
    int ib;
    int ic;
};

class C1 {
    int i = 0;
public:
    void setvalue ( int value );
    int getvalue();
};

void C1::setvalue(int value){
    i = value;
}

int C1::getvalue(){
    return i;
}

int main()
{
    int i = 47;
    C1 o1;
    
    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());
    return 0;
}
