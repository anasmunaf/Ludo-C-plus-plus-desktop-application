#include"board.h"
Board::Board()
{
    initwindow(1500,800);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
}
Board::~Board()
{
    closegraph();
}
void Board::create()
{
    // Grouping

    setfillstyle(SOLID_FILL,LIGHTRED);
    rectangle(0,0,300,300);
    floodfill(150,150, BLACK);

    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(495,0,795,300);
    floodfill(750,100, BLACK);

    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(0,495,300,795);
    floodfill(150,600, BLACK);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(495,495,795,795);
    floodfill(750,600, BLACK);

    // stairs

    setfillstyle(SOLID_FILL,LIGHTGRAY);

    for(int i=300;i<=430;i=i+65)
    {
        for(int j=0;j<=250;j=j+50)
        {
            rectangle(i,j,i+65,j+50);
            floodfill(i+10,j+10, BLACK);
        }
    }

    for(int i=300;i<=430;i=i+65)
    {
        for(int j=495;j<=745;j=j+50)
        {
            rectangle(i,j,i+65,j+50);
            floodfill(i+10,j+10, BLACK);
        }
    }

    for(int i=0;i<=250;i=i+50)
    {
        for(int j=300;j<=430;j=j+65)
        {
            rectangle(i,j,i+50,j+65);
            floodfill(i+10,j+10, BLACK);
        }
    }

    for(int i=495;i<=745;i=i+50)
    {
        for(int j=300;j<=430;j=j+65)
        {
            rectangle(i,j,i+50,j+65);
            floodfill(i+10,j+10, BLACK);
        }
    }

    // center Box

    line(300,300,495,495);
    line(300,495,495,300);

    // Colors

    setfillstyle(SOLID_FILL,LIGHTBLUE);

    floodfill(310,120,BLACK);
    floodfill(450,60,BLACK);

    for(int i=60;i<360;i=i+50)
        floodfill(400,i,BLACK);

    setfillstyle(SOLID_FILL,YELLOW);

    floodfill(690,350,BLACK);
    floodfill(740,490,BLACK);

    for(int i=410;i<745;i=i+50)
        floodfill(i,400,BLACK);


    setfillstyle(SOLID_FILL,LIGHTGREEN);

    floodfill(480,680,BLACK);
    floodfill(310,730,BLACK);

    for(int i=410;i<730;i=i+50)
        floodfill(400,i,BLACK);


    setfillstyle(SOLID_FILL,LIGHTRED);

    floodfill(120,480,BLACK);
    floodfill(60,310,BLACK);

    for(int i=60;i<350;i=i+50)
        floodfill(i,400,BLACK);

    int x=1400,y=1;
    settextstyle(BOLD_FONT,HORIZ_DIR,4);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(x,y,x+100,y+100);
    outtextxy(x+10,y+40,"EXIT");
    floodfill(x+10,y+50, BLACK);

}
Graph* Board::createGraph()
{
    Graph *pos=new Graph(52);
    int x=25,y=325;
    int h=0,k=0;

    for(int i=0;i<5;i++)
    {
        x=x+50;
        pos->addEdge(pos,i,x,y,i);
    }
    x=x+65;
    for(int i=5;i<11;i++)
    {
        y=y-50;
        pos->addEdge(pos,i,x,y,i);
    }
    // Blue Row
    x=x+65;
    pos->addEdge(pos,11,x,y,11);
    h=x;
    k=y;
    for(int i=0;i<6;i++)
    {
        k=k+50;
        pos->addEdge(pos,11,h,k,52+i);
    }
    //end row
    x=x+65;
    for(int i=12;i<18;i++)
    {
        pos->addEdge(pos,i,x,y,i);
        y=y+50;
    }
    for(int i=18;i<24;i++)
    {
        x=x+50;
        pos->addEdge(pos,i,x,y,i);
    }
    // Yellow row
    y+=65;
    pos->addEdge(pos,24,x,y,24);
    h=x;
    k=y;
    for(int i=0;i<6;i++)
    {
        h-=50;
        pos->addEdge(pos,24,h,k,58+i);
    }
    //end row
    y+=65;
    for(int i=25;i<31;i++)
    {
        pos->addEdge(pos,i,x,y,i);
        x=x-50;
    }
    y=y+15;
    for(int i=31;i<37;i++)
    {
        y=y+50;
        pos->addEdge(pos,i,x,y,i);
    }
    //Green Row
    x-=65;
    pos->addEdge(pos,37,x,y,37);
    h=x;
    k=y;
    for(int i=0;i<6;i++)
    {
        k=k-50;
        pos->addEdge(pos,37,h,k,64+i);
    }
    //end row
    x-=65;
    for(int i=38;i<44;i++)
    {
        pos->addEdge(pos,i,x,y,i);
        y=y-50;
    }
    x=x-15;
    for(int i=44;i<50;i++)
    {
        x=x-50;
        pos->addEdge(pos,i,x,y,i);

    }
    // Red row
    y-=65;
    pos->addEdge(pos,50,x,y,50);
    h=x;
    k=y;
    for(int i=0;i<6;i++)
    {
        h+=50;
        pos->addEdge(pos,50,h,k,70+i);
    }
    // end row
    y-=80;
    pos->addEdge(pos,51,x,y,51);
    return pos;
}


