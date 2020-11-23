// This is a comment
/*
    Multi-line comment
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std; // allows you to eliminate std:: from  'std:: cout'

int addNumbers(int firstNum, int secondNum = 0){

    int combinedValue = firstNum + secondNum;

    return combinedValue;
}

int getFactorial(int number){
    int sum;
    if(number == 1) sum = 1;
    else sum = getFactorial(number - 1) * number;
    return sum;
}

void makeMeYoung(int* age){

    cout << "I used to be " << *age << endl;
    *age = 21;
}

void actYourAge(int& age){   // passing in a reference

    age = 39;
}

// CLASSES

class Animal {
    private:             // Variables within private can only be changed by functions within the class. This is referred to as ENCAPSULATION
        int height;
        string name;
        int weight;

        static int numOfAnimals;    // static means that the value will be shared by every object created in the Animal class

    public:
        int getHeight() {return height;}
        int getWeight(){return weight;}
        string getName(){ return name;}
        void setHeight(int cm ){ height = cm; }
        void setWeight(int kg ){ weight = kg; }
        void setName(string animalName ){ name = animalName; }

        // Constructor - the function that is called whenever an object needs to be created
        Animal(int, int, string);

        // Deconstructor Prototype
        ~Animal();

        // Another constructor that doesn't receive anything
        Animal();

        // static method - attached to the class, not the object. Can only access static variables within the class
        static int getNumOfAnimals(){ return numOfAnimals; }

        void toString();

};

int Animal::numOfAnimals = 0;   // declaring static variable

// CONSTRUCTOR
Animal::Animal(int height, int weight, string name){   // the '::'  is the scope operator

    this -> height = height;
    this -> weight = weight;
    this -> name = name;
    Animal::numOfAnimals++;
}

// DECONSTRUCTOR
 Animal::~Animal(){

    cout << "Animal " << this -> name << " destroyed" << endl;
}

// Overloaded constructor when no attributes are passed in
 Animal::Animal(){

    Animal::numOfAnimals++;
}

void Animal::toString(){

    cout << this -> name << " is " << this -> height << " cms tall and " << this -> weight << " kgs in weight" << endl;
}

// Inheritance

class Dog : public Animal {

    private:
        string sound = "Woof";

    public:
        void getSound() { cout << sound << endl; }
        Dog(int, int, string, string);
        Dog() : Animal(){};
        void toString();

};

Dog::Dog(int height, int weight, string name, string bark) : Animal(height, weight, name) {

    this -> sound = bark;
}

void Dog::toString(){
    cout << this -> getName() << " is " << this -> getHeight() << " cms tall and " << this -> getWeight() << " kgs in weight" << this -> sound << endl;
}



int main(){

    cout << "Hello World" << endl;

    const double PI = 3.1415926535;

    char myGrade = 'A';

    bool isHappy = true;

    int myAge = 31;
    
    float favNum = 4.3312;

    double otherfavNum = 4.3145131;

    int largestInt = 2147483647;

    cout << "Favourite Number: " << favNum << endl;

    cout << "Largest int: " << largestInt << endl;

    /*
        Other types include
        
        short int: Atleast 16 bits
        long int: At least 32 bits
        long long int: At least 64 bits
        unsigned int: Same size as signed version
        long double: Not less then double
    */

   // To find the size of a type
   cout << "Size of int: " << sizeof(myAge) << endl;
   cout << "Size of char: " << sizeof(myGrade) << endl;
   cout << "Size of bool: " << sizeof(isHappy) << endl;
   cout << "Size of float: " << sizeof(favNum) << endl;
   cout << "Size of double: " << sizeof(otherfavNum) << endl;

   int five = 5;
   cout << "5++ = " << five++ << endl; // performs the action after it prints 5
   cout << "++5 = " << ++five << endl; // performs the action and prints the new updated value
   cout << "++5 = " << five-- << endl;
   cout << "++5 = " << five-- << endl;

   // Short hand assignments
   five += 5;

   // Order of operations states that any * and / is preformed before any + and -

   // Comparison Operators:  ==, != , >, <, >=, <=
   

   // SWITCH CASES
    int greetingOption = 2;

    switch(greetingOption){

        case 1:
            cout << "bonjour" << endl;
            break;
        case 2:
            cout << "Hola" << endl;
            break;
        case 3:
            cout << "Hallo" << endl;
        default:
            cout << "Hello" << endl;
    }
   

   // TERNARY OPERATOR -- variable = (condition) ? true : false

   int largestNum = (5>2) ? 5 : 2;

   // ARRAY
   int myFavNums[5];
   int badNums[5] = {4, 13, 14, 24, 34};

   cout << "Bad Number 1: " << badNums[0] << endl;

   // MULTI-DIMENSIONAL ARRAY
   char myName[5][5] = {{'D','e','r','e','k'}, {'B', 'a', 'n', 'a', 's'}};


   // FOR LOOP
    for (int j =0; j < 2; j++){

        for(int k = 0; k < 5; k++){

            cout << myName[j][k];
        }

        cout << endl;
    }

    // WHILE LOOPS -- used when you don't know ahead of time when your loop will end
    int randNum = (rand() % 100) + 1;

    while(randNum != 100 ){
        cout << randNum << ",";

        randNum = (rand() % 100) + 1;
    }
    cout << endl;

    // DO WHILE LOOPS -- when you want to execute the loop atleast one time
    int intNumberGuessed = 0;
    string numberGuessed;

    do {

        cout << "Guess between 1 and 10: ";

        getline(cin, numberGuessed); // to grab input from keyboard
        intNumberGuessed = stoi(numberGuessed);  // stoi converts string to integer
        cout << intNumberGuessed << endl; 

    } while(intNumberGuessed != 4);

    cout << "You win" << endl;


    // WITH C++, it provides us with string objects unlike C [ use double quotes]
    char happyArray[6] = {'H', 'a', 'p', 'p', 'y','\0'};  // C way
    string birthdayString = " Birthday";                  // C++ way
    cout << happyArray + birthdayString << endl;


    /*        #######################################################       */
    double eulersConstant = .57721;
    string eulerGuess;
    double eulerGuessDouble;

    cout << "What is Euler's Constant? ";
    getline(cin, eulerGuess);

    eulerGuessDouble = stod(eulerGuess);
    
    if (eulerGuessDouble == eulersConstant){
        cout << "You are right" << endl;
    } else {
        cout << "You are wrong" << endl;
    }

    cout << "Size of String " << eulerGuess.size() << endl;
    cout << "Is  string empty " << eulerGuess.empty() << endl;
    cout << eulerGuess.append(" was your guess") << endl;

    // COPYING VALUES TO ANOTHER VARIABLE
    string yourName;
    cout << "what is your name? ";
    getline(cin, yourName);

    cout << "hello " << yourName << endl;

    string wholeName = yourName.assign(yourName);
    cout << wholeName << endl;

    string firstName = wholeName.assign(wholeName, 0, 6);
    cout << firstName << endl;

    // search string
    int lastNameIndex = yourName.find("Banas", 0);
    cout << "Index for last name " << lastNameIndex << endl;

    yourName.insert(6, "Justin");
    cout << yourName << endl;

    yourName.erase(6,7);
    cout << yourName << endl;

    yourName.replace(6, 5, "Maximus");
    cout << yourName << endl;

    /*  #######################################################  */
    // Vectors: Format vector <DataType> nameOfVector
    // C++ vectors handle dynamic data

    vector <int> lotteryNumVect(10);

    int lotteryNumArray[5] = {4, 13, 14, 24, 34};

    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
    cout << lotteryNumVect.at(2) << endl;

    lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);
    cout << lotteryNumVect.at(5) << endl;

    lotteryNumVect.push_back(64);
    cout << "Final Value " << lotteryNumVect.back() << endl;

    lotteryNumVect.pop_back();


    // CALLING FUNCTIONS
    cout << addNumbers(1, 5) << endl;
    cout << getFactorial(2) << endl;

    // Reading Files 

    string steveQuote = "A day without sunshine is like, you know, night";

    ofstream writer("stevequote.txt");

    if ( ! writer) {

        cout << "Error opening file" << endl;
        return -1;
    } else {
        writer << steveQuote << endl;

        writer.close();
    }

    ofstream writer2("stevequote.txt", ios::app);
    
    if ( ! writer2) {

        cout << "Error opening file" << endl;
        return -1;
    } else {
        writer2 << "\n - Steve Martin" << endl;

        writer2.close();
    }

    char letter;

    ifstream reader("stevequote.txt");

    if (! reader){
        cout << "Error opening file" << endl;
        return -1;
    } else {

        for (int i = 0; ! reader.eof(); i++){

            reader.get(letter);
            cout << letter;
        }

        cout << endl;
        reader.close();
    }

    // EXCEPTIONS OR ERROR

    int number = 0;

    try {
        if (number != 0){
            cout << 2/number << endl;
        } else throw(number);
    }
    catch (int number){

        cout << number << " is not valid" << endl;
    }

    // POINTERS
    // & --> reference operator
    // A pointer is able to store a memory address

    int myAge1 = 23;

    int* agePtr = &myAge1;

    cout << "Address of pointer" << agePtr << endl;   // gives you the memory address of the data

    cout << "Data at memory address" << *agePtr << endl;   // gives you the data at the memory address

    makeMeYoung(&myAge1); // You use & to pass by reference.

    cout << "I'm " << myAge1 << " years old now" << endl;

    int& ageRef = myAge1;

    cout << "myAge: " << myAge1 << endl;

    ageRef++;

    cout << "myAge: " << myAge1 << endl;

    actYourAge(myAge1);

    cout << "myAge:" << myAge1 << endl;

    /* 
    
        - Use a pointer if you don't want WANT TO INITIALIZE AT DECLARATION
            - such as: int& ageRef = myAge;
    */


   Animal fred;

   fred.setHeight(33);
   fred.setWeight(10);
   fred.setName("Fred");

   cout << fred.getName() << " is " << fred.getHeight() << " cms tall and " << fred.getWeight() << " kgs in weight" << endl;

   Animal tom(36, 15, "Tom");
   
   cout << tom.getName() << " is " << tom.getHeight() << " cms tall and " << tom.getWeight() << " kgs in weight" << endl;

   Dog spot(38, 16, "Spot", "Woof");

   // super class version of a method
   spot.Animal::toString();

    return 0;
}
