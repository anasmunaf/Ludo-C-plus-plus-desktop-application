#ifndef REDCLR
#define REDCLR

#include<iostream>
#include<graphics.h>
#include"player.h"
using namespace std;

class RedClr:public Player
{
private:

public:
    RedClr(int color,Graph *graph);
    ~RedClr();
    void play(int num);
    int getX(int num);
    int getY(int num);
};
#endif // BOARD

