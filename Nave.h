#ifndef NAVE_H
#define NAVE_H

class Nave {
private:
    int x;
    int y;
    int hearts;
public:
    Nave(int x, int y, int hearts);
    void draw();
    void del();
    void move();
    void draw_hearts();
};

#endif