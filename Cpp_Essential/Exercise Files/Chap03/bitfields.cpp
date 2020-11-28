// bitfields.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// Shows how many bits are set aside for each value
struct preferences {
    bool likesMusic : 1;
    bool hasHair : 1;
    bool hasInternet : 1;
    bool hasDinosaur : 1;
    unsigned int numberOfChildren : 4;
};

int main() {
    // Created a preferences struct named Homer and assigned value to its features
    struct preferences homer;
    homer.likesMusic = true;
    homer.hasHair = false;
    homer.hasInternet = true;
    homer.hasDinosaur = false;
    homer.numberOfChildren = 3;
    
    printf("sizeof int: %ld bits\n", sizeof(int) * 8);
    printf("sizeof homer: %ld bits\n", sizeof(homer) * 8);
    
    if(homer.likesMusic) printf("homer likes music\n");
    if(homer.hasHair) printf("homer has hair\n");
    if(homer.hasInternet) printf("homer has net\n");
    if(homer.hasDinosaur) printf("homer has a dino\n");
    printf("homer has %d children\n", homer.numberOfChildren);
    
    
    // Bit fields can be an issue in concurrent or threaded programming situations because all the bits in the unit need to be read all at the same time
    return 0;
}
