#ifndef COIN
#define COIN
#include"player.h"
#include<iostream>
#include<graphics.h>
using namespace std;

class Coin{
private:
    int r;
    int x;
    int y;
    int color;
    int num;
    int bkc;
    class Player *clr;
public:
    Coin(int x,int y,int color,int num,Player *clr);
    int coinNumber();
    int getCoinClr();
    int getbkc();
    class Player* getClr();
    ~Coin();
};
#endif

