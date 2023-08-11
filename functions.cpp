#include "functions.h"
#include <Windows.h>
#include <stdio.h>

void gotoxy(int x, int y)
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE); // obtener el identificador de la consola
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon, dwPos);    
}

void hideCursor() 
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 2;
    cci.bVisible = false;
    SetConsoleCursorInfo(hCon, &cci);
}

void pintar_limites() 
{
    for (int i = 2; i < 77; i++)
    {
        gotoxy(i,3); printf("%c",205);
        gotoxy(i,23);printf("%c",205);
    }

    for (int i = 4; i < 23; i++) 
    {
        gotoxy(2,i); printf("%c",186);
        gotoxy(77,i); printf("%c",186);
    }

    gotoxy(2,3); printf("%c",201);
    gotoxy(2,33); printf("%c",201);
    gotoxy(77,3); printf("%c",201);
    gotoxy(77,33); printf("%c",201);
}