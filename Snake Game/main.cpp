// This project will not be object oriented

#include <iostream>
#include <stdio.h>   // console input/output
#include <conio.h>  // header only compatible with windows machine
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
    cout << "Score: " << score << endl;

}

void Input(){

    if (_kbhit()){
        
        switch (getchar()){

            case 'a':
                dir = LEFT;
                break;
             case 'd':
                dir = RIGHT;
                break;
             case 'w':
                dir = UP;
                break;
             case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
        if ( x > width || x < 0 || y < height || y < 0){
            gameOver = true;
        }

        if ( x == fruitX && y == fruitY){

            score += 10;
            fruitX = rand() % width;
            fruitY = rand() % height;

        }
    }
}

void Logic(){

    switch (dir)
    {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

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

