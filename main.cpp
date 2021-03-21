#include"board.h"
#include"dice.h"
#include"Red.h"
#include"Blue.h"
#include"Yellow.h"
#include"Green.h"
#include"Graph.h"

int main()
{
    Board test;
    Dice d1;
    test.create();
    d1.box();

    Graph *graph= test.createGraph();
    Player *redClr=new RedClr(4,graph);
    Player *blueClr= new BlueClr(1,graph);
    Player *yellowClr= new YellowClr(COLOR(242, 255, 122),graph);
    Player *greenClr= new GreenClr(2,graph);

    int i=0,j=0,num=0;
    while(1)
    {
        int x=1400,y=2;
        getmouseclick(WM_RBUTTONDOWN,i,j);
        if(i>=x&&i<=x+100&&j>=y&&j<=y+100)
        {
            break;
        }
        x=1000;
        y=100;
        if(i>=x&&i<=x+100&&j>=y&&j<=y+100)
        {
            num=d1.roll(i,j);
            redClr->play(num);
            delay(1000);
            num=d1.roll(i,j);
            blueClr->play(num);
            delay(1000);
            num=d1.roll(i,j);
            yellowClr->play(num);
            delay(1000);
            num=d1.roll(i,j);
            greenClr->play(num);
        }
    }
    test.~Board();
}
