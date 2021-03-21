#ifndef DICE
#define DICE

#include<iostream>
#include<graphics.h>
#include<cstdlib>
#include<time.h>
using namespace std;

class Dice
{
private:
    int x;
    int y;
public:
    Dice();
    ~Dice();
    void box();
    int roll(int i,int j);
};
#endif // BOARD
