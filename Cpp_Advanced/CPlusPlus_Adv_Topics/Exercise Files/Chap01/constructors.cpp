// constructors.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-03
#include <cstdio>
#include <string>
using namespace std;

const string unk = "unknown";
const string clone_prefix = "clone-";

// RULE OF THREE --> C++ provides implicit constructors for the copy constructor, destructor, and the copy operator. IF you need to build your own methods for any one of these, it is better to build all three based off your class' needs

// -- interface --
class Animal {
    string _type = "";
    string _name = "";
    string _sound = "";
public:
    Animal();   // default constructor
    Animal(const string & type, const string & name, const string & sound);
    Animal(const Animal &); // copy constructor
    Animal & operator = (const Animal &); // copy operator
    ~Animal();  // destructor
    
    void print() const;
};

// -- implementation --
Animal::Animal() : _type(unk), _name(unk), _sound(unk) {     // the colon is a special list operator that is used in classes with defining the constructor. You list all the data members you want initialized and then also assign the values
    puts("default constructor");
}

Animal::Animal(const string & type, const string & name, const string & sound)
: _type(type), _name(name), _sound(sound) {
    puts("constructor with arguments");
}

Animal::Animal(const Animal & rhs) {
    puts("copy constructor");
    _name = clone_prefix + rhs._name;
    _type = rhs._type;
    _sound = rhs._sound;
}

Animal::~Animal() {
    printf("destructor: %s the %s\n", _name.c_str(), _type.c_str());
}

void Animal::print () const {
    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

Animal & Animal::operator = (const Animal & rhs) {
    puts("copy operator");
    if(this != &rhs) {
        _name = clone_prefix + rhs._name;
        _type = rhs._type;
        _sound = rhs._sound;
    }
    return *this;
}

int main() {
    Animal a;
    a.print();
    
    const Animal b("cat", "fluffy", "meow");
    b.print();
    
    const Animal c = b;
    c.print();
    
    a = c;
    a.print();
    
    return 0;
}
