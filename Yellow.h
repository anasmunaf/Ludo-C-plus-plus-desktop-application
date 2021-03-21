#ifndef YELLOWCLR
#define YELLOWCLR

#include<iostream>
#include<graphics.h>
#include"player.h"
using namespace std;

class YellowClr:public Player
{
private:

public:
    YellowClr(int color,Graph *graph);
    ~YellowClr();
    void play(int num);
    int getX(int num);
    int getY(int num);
};
#endif // BOARD

