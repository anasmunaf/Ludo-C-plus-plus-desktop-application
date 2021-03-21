#include"dice.h"
Dice::Dice():x(1000),y(100){}
Dice::~Dice(){}
int Dice::roll(int i,int j)
{
    srand(time(0));
    int random=(rand()%6)+1;
    char num=(char)(random+48);
    outtextxy(x+40,y+40,&num);
    cout<<num;
    return num-48;
}
void Dice::box()
{
    settextstyle(BOLD_FONT,HORIZ_DIR,4);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(x,y,x+100,y+100);
    outtextxy(x+10,y+40,"Dice");
    floodfill(x+10,y+50, BLACK);
    y=300;
    rectangle(x,y,x+100,y+100);
}
