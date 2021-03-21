#include"coin.h"
Coin::Coin(int x,int y,int color,int num,Player *clr)
{
    this->x=x;
    this->y=y;
    this->color=color;
    this->num=num;
    this->clr=clr;
    r=20;
    bkc=getpixel(x,y);
    setfillstyle(SOLID_FILL,color);
    circle(x,y,r);
    floodfill(x+5,y+5, BLACK);

}
Coin::~Coin(){
    setfillstyle(SOLID_FILL,bkc);
    circle(x,y,r);
    floodfill(x+5,y+5, bkc);
}
int Coin::coinNumber()
{
    return num;
}
int Coin::getCoinClr()
{
    return color;
}
int Coin::getbkc()
{
    return bkc;
}
class Player* Coin::getClr()
{
    return clr;
}


