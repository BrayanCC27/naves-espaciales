#include "Nave.h"
#include "functions.h"
#include <stdio.h>
#include <conio.h>

#define UP 72
#define LEFT 75
#define RIGTH 77
#define DOWN 80

Nave::Nave(int x, int y, int hearts)
{
    this->x = x;
    this->y = y;
    this->hearts = hearts;
}

void Nave::draw()
{
    gotoxy(x,y);   printf("  %c", 94);
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

        if (tecla == LEFT && x > 3) 
            x--;
        if (tecla == RIGTH && x + 6 < 77)
            x++;
        if (tecla == UP && y > 4)
            y--;
        if (tecla == DOWN && y+3 < 23)
            y++;
        if (tecla == 'e')
            hearts--;
        draw();
        draw_hearts();
    }
}

void Nave::draw_hearts()
{
    gotoxy(64,2); printf("Salud");
    gotoxy(70,2); printf("      ");

    for (int i = 0; i < hearts; i++)
    {
        gotoxy(70+i,2); printf("%c", 3);
    }
}

