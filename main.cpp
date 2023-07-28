#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include "functions.h"
#include "Nave.h"

using namespace std;

int main() {

    hideCursor();
    Nave N(7,7);
    N.draw();
    bool gameOver = false;

    while(!gameOver) 
    {
        N.move();
        Sleep(30);
    }
    return 0;
}