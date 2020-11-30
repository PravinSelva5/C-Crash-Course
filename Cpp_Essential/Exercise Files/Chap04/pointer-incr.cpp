// pointer-incr.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

void printp(int *p) {
    printf("pointer is %p, value is %d\n", p, *p);
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *p = arr;
    printp(p++);
    printp(p++);
    printp(p++);
    
    // prefix increment or decrement operator is a bit more efficient than post increment or decrement, because you don't have to make a copy of the object before evaluating
    return 0;
}
