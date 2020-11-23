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

    vector <int> lotteryNumVect(10);

    int lotteryNumArray[5] = {4, 13, 14, 24, 34};

    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);
    cout << lotteryNumArray.at(2) << endl;

    lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);
    cout << lotteryNumVect.at(5) << endl;

    lotteryNumVect.push_back(64);
    cout << "Final Value " << lotteryNumVect.back() << endl;

    lotteryNumVect.pop_back();


    // CALLING FUNCTIONS
    cout << addNumbers(1, 5) << endl;
    cout << getFactorial(2) << endl;

 

    return 0;
}
