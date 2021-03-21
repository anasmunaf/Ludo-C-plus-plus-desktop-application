#ifndef GREENCLR
#define GREENCLR

#include<iostream>
#include<graphics.h>
#include"player.h"
using namespace std;

class GreenClr:public Player
{
private:

public:
    GreenClr(int color,Graph *graph);
    ~GreenClr();
    void play(int num);
    int getX(int num);
    int getY(int num);
};
#endif //

