// This is a comment
/*
    Multi-line comment
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std; // allows you to eliminate std:: from  'std:: cout'

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



    return 0;
}
