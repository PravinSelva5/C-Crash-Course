// This project will not be object oriented

#include <iostream>
#include <conio.h> // console input/output
using namespace std;

// global variable
bool gameOver;
const int width = 20;
const int height = 20;
int x,y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup(){

    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;

} 

void Draw() {
    system("clear");  // clear the terminal screen
    
    // Prints top border
    for (int i=0; i < width; i++){
        cout << "#";
    }
    cout << endl;

    // Print walls
    for (int i=0; i < height; i++){
        for (int j=0; j < width; j++){
            if ( j == 0 ){
                cout << "#";
            }
            else if ( j == width - 1){
                cout << "#";
            } 
            else if ( i == y && j == x) {
                cout << "O";
            }
            else if ( i == fruitY && j == fruitX){
                cout << "F";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Prints bottom border
    for (int i=0; i < width; i++){
        cout << "#";
    }
    cout << endl;

}

void Input(){

}

void Logic(){

}



int main()
{
    Setup();
    while (!gameOver){
        Draw();
        Input();
        Logic();
        // Sleep(10) can be used to slow the game down
    }
    

    return 0;
}

