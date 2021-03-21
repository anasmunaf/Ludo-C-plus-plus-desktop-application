#include"Yellow.h"
YellowClr::YellowClr(int color,Graph *graph)
{
    this->graph=graph;
    this->color=color;
    int x=75+495,y=225+495;
    arr[0][0]=x;
    arr[0][1]=x;
    arr[1][0]=y;
    arr[1][1]=x;
    arr[2][0]=x;
    arr[2][1]=y;
    arr[3][0]=y;
    arr[3][1]=y;

    member[0]=new Coin(arr[0][0],arr[0][1],color,0,this);
    member[1]=new Coin(arr[1][0],arr[1][1],color,1,this);
    member[2]=new Coin(arr[2][0],arr[2][1],color,2,this);
    member[3]=new Coin(arr[3][0],arr[3][1],color,3,this);

    deActive.push(member[0]);
    deActive.push(member[1]);
    deActive.push(member[2]);
    deActive.push(member[3]);
}
YellowClr::~YellowClr(){}

void YellowClr::play(int num){
    int check=deActive.empty();
    if(num==6&&check==0)
    {
        Coin *temp=deActive.front();
        deActive.pop();
        int color=temp->getCoinClr();
        int pos=temp->coinNumber();
        member[pos]=NULL;
        graph->addCoin(graph,26,temp,this);
        temp=NULL;
    }
    else if(deActive.size()<4)
    {
        int k=0,j=0;
        for(int i=0;i<52;i++)
        {
            if(graph->getClr(graph,i)==COLOR(242, 255, 122))
            {
                k=graph->getX(graph,i);
                j=graph->getY(graph,i);
                break;
            }
        }
        graph->newLoc(graph,k,j,num,this);
    }
}

int YellowClr::getX(int num){
    return arr[num][0];
}
int YellowClr::getY(int num){
    return arr[num][1];
}
