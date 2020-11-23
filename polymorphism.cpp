#include <iostream>
using namespace std;

/*
class Animal {
    public:
        void getFamily() {
            cout << "We are animals" << endl;   
        }

        // you mark a method VIRTUAL if the base class is most likely going to be overwritten by a SUBCLASS
        virtual void getClass() { cout << "I'm an Animal" << endl;}
};

class Dog : public Animal {
    public:
        void getClass() { cout << "I'm a Dog" << endl; }
};

*/

class Animal {
    public:
        virtual void makeSound(){
            cout << "The Animal says grr" << endl;
        }
};

class Dog : public Animal {
    public:
        void makeSound(){
                cout << "The Animal says woof" << endl;
            }
};

class Cat : public Animal {
    public:
        void makeSound(){
            cout << "The Animal says meow" << endl;
        }
};

// ABSTRACT DATA TYPE

class Car {
    public:
        virtual int getNumWheels() = 0;
        virtual int getNumDoors() = 0;
};

class StationWagon : public Car {
    public:
        int getNumWheels() { cout << "Station wagon has 4 wheels" << endl; }
        int getNumDoors() { cout << "Station wagon has 4 doors" << endl; }
        StationWagon() {}
        ~StationWagon();
};



int main(){

    Animal* pCat = new Cat;
    Animal* pDog = new Dog;

    pCat -> makeSound();
    pDog -> makeSound();

    Car* stationWagon = new StationWagon();

    stationWagon -> getNumWheels();



    return 0;
}