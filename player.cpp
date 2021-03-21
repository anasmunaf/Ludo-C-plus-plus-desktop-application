#include"player.h"
Player::Player()
{
    member[0]=NULL;
    member[1]=NULL;
    member[2]=NULL;
    member[3]=NULL;

}
Player::~Player()
{

}

Coin* Player::setMember(int k,int l, int num2, int color,Coin *temp)
{
    Player *clr=temp->getClr();
    delete temp;
    temp=NULL;
    Coin *temp2=new Coin(k,l,color,num2,clr);
    return temp2;

}

void Player::addMember(Coin *temp)
{
    int num=temp->coinNumber();
    Player *clr=temp->getClr();
    clr->deActive.push(setMember(clr->getX(num),clr->getY(num),num,temp->getCoinClr(),temp));

}
