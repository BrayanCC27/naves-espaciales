#ifndef NAVE_H
#define NAVE_H

class Nave {
private:
    int x;
    int y;
public:
    Nave(int x, int y);
    void draw();
    void del();
    void move();
    void draw();
};

#endif