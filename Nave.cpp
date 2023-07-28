#include "Nave.h"
#include "functions.h"
#include <stdio.h>
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGTH 77
#define DOWN 80

Nave::Nave(int x, int y)
{
    this->x = x;
    this->y = y;
}

void Nave::draw()
{
    gotoxy(x,y); printf("  %c", 94);
    gotoxy(x,y+1); printf(" %c%c%c", 40,207,41);
    gotoxy(x,y+2); printf("%c%c %c%c", 30,190,190,30);
}

void Nave::del()
{
    gotoxy(x,y); printf("     ");
    gotoxy(x,y+1); printf("     ");
    gotoxy(x,y+2); printf("     ");
}

void Nave::move()
{
    if(kbhit())
    {
        char tecla = getch();
        del();

        if (tecla == LEFT) 
            x--;
        if (tecla == RIGTH)
            x++;
        if (tecla == UP)
            y--;
        if (tecla == DOWN)
            y++;
        draw();
    }
}

