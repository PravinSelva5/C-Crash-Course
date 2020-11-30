// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <cstdint>
using namespace std;

// unsigned 8-bit to string
const char * u8_to_cstr(const uint8_t & x){
    static char buf[sizeof(x) * 8 + 1];
    for (char & c : buf) c = 0 ;
    char * bp = buf;
    for (uint8_t bitmask = 0b10000000; bitmask; bitmask >>= 1){
        *(bp++) = x & bitmask ? '1' : '0';
    }
    return buf;
}

int main()
{
    int x = 5;
    int y = 47;
    printf("x is %d\n", x);
    printf("x is %d\n", y);
    
    
    // Compound assignment operators
    // x = x + y has a temporary object created before copying to the x value. This is not present when using compound assignment operators.
    x += y;
    x -= y;
    x *= y;
    x %= y;
    
    
    // incrementing and decrementing operators
    int i = 0;
    printf("i is %d\n", ++i); // increments and then prints the output
    printf("i is %d\n", ++i);
    printf("i is %d\n", ++i);
    printf("i is %d\n", i++);  // outputs the current value and then increments
    printf("i is %d\n",i++);  // decrement works the same way as increments
    puts("Hello, World!");
    
    // Bitwise Operators
    uint8_t k = 5;
    uint8_t l = 10;
    uint8_t z = x | y; // bitwise OR
    uint8_t m = x & y; // bitwise AND
    uint8_t p = x ^ y; // bitwise XOR -- each value of x and y should be different from each other to set a 1
    uint8_t t = ~y; // bitwise NOT, all bits are flipped
    uint8_t o = y << 1; // shift operators, this will shift all the bits of y by 1
    
    
    printf("k is %s\n", u8_to_cstr(k));
    printf("l is %s\n", u8_to_cstr(l));
    printf("result of bitwise OR %s\n", u8_to_cstr(z));
    printf("result of bitwise AND %s\n", u8_to_cstr(m));
    printf("result of bitwise XOR %s\n", u8_to_cstr(p));
    printf("result of bitwise OR %s\n", u8_to_cstr(k));
    printf("result of bitwise NOT %s\n", u8_to_cstr(t));
    printf("result of shift operator %s\n", u8_to_cstr(o));
    
    // ternary conditional operator
    // contains three operators
    // condition ? if true evaluate this : if false, evaluate this
    
    int saf = 5;
    int afsas = 42;
    
    const char * s = saf > afsas ? "yes" : "no";
    
    // typecast can only be used for compatible types. Example would be long int and int.
    // size_t is a typedef that is used to create a compatabile type on whatever system
    
    
    // Operator Precedence
    // 
    
    puts(s);
    
    return 0;
}
