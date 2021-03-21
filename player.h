#ifndef PLAYER
#define PLAYER

#include<iostream>
#include<graphics.h>
#include"coin.h"
#include"Graph.h"
#include<queue>
using namespace std;

class Player
{
private:

public:
    Player();
    ~Player();
    virtual void play(int num)=0;
    class Coin* setMember(int x,int y, int num, int color,Coin *temp);
    void addMember(class Coin *temp);
    virtual int getX(int num)=0;
    virtual int getY(int num)=0;
protected:
    class Graph *graph;
    int color;
    int arr[4][2];
    Coin *member[4];
    class queue <Coin *> deActive;
};
#endif

