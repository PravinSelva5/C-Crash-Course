// new-delete.cpp by Bill Weinman <http://bw.org/>
//   updated 2018-10-27
#include <cstdio>
#include <new>
using namespace std;

constexpr size_t count = 1024;

int main() {
    printf("allocate space for %lu long int at *ip with new\n", count);
    
    // allocate array
    long int * ip;
    
    try {
        ip = new long int [count]; // new basically called malloc() to create the memory space you need
    } catch (std::bad_alloc & ba) {
        fprintf(stderr, "Cannot allocate memory (%s)\n", ba.what());
        return 1;
    }
    
    // initialize array
    for( long int i = 0; i < count; ++i ) {
        ip[i] = i;
    }
    
    // print array
    for( long int i = 0; i < count; ++i ) {
        printf("%ld ", ip[i]);
    }
    puts("");
    
    // deallocate array
    // RMR, WHEN YOU ALLOCATE SPACE WITH NEW, YOU MUST DEALLOCATE SPACE WITH DELETE
    delete [] ip; // The [] is used when the there is more than one object that needs to be deleted. In this case, the array needs to be deleted.
    puts("space at *ip deleted");
    
    return 0;
}
