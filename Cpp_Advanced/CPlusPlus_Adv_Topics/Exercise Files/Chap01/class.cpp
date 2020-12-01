// class.cpp by Bill Weinman <http://bw.org/>
// updated bw 2018-10-03
#include <cstdio>
using namespace std;

// a very simple class
class c1 {
    int i = 0;
public:
    void setvalue( const int & value ) { i = value; }
    int getvalue() const;
};


int c1::getvalue() const {
    printf("getvalue: this is %p\n", this); // this pointer is typically used for members of a called object
    
    return i;
    
}

int main() {
    const int i = 47;
    c1 o1;
    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());
    return 0;
}
