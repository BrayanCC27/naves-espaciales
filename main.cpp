#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include "functions.h"
#include "Nave.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "en_US.UTF-8");
    hideCursor();
    pintar_limites();
    Nave N(7,7,3);
    N.draw();
    N.draw_hearts();
    
    bool gameOver = false;

    while(!gameOver) 
    {
        N.move();
        Sleep(20);
    }
    return 0;
}