#include <cstdio>
#include <vector>

using namespace std;

int main() {
    vector<int> vi = {1,2,3,4,5};  // <int> is the template parameter
    
    for (vector<int>::iterator it = vi.begin(); it != vi.end(); ++it){
        printf("int is %d\n", *it);
    }
    
    // a member of the class has a separate iterator class which is why you need to use the scope resolution operator
    // to use a vector in a for loop like above you need to write the iterator as above.
    // AN EASIER WAY TO DO THIS is to replace " vector<int>::iterator" with "auto"

    // ONLY USE AUTO WHEN THE IMPLICATIONS ARE CLEAR AND THE USAGE IS CONCISE
    return 0;
}
