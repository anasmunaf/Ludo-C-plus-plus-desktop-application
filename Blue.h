#ifndef BLUECLR
#define BLUECLR

#include<iostream>
#include<graphics.h>
#include"player.h"
using namespace std;

class BlueClr:public Player
{
private:

public:
    BlueClr(int color,Graph *graph);
    ~BlueClr();
    void play(int num);
    int getX(int num);
    int getY(int num);
};
#endif //


