#ifndef NODE
#define NODE
#include<iostream>
#include<stack>
using namespace std;
#include "coin.h"
#include "player.h"
struct Node
{
    stack<class Coin*>member;
    Node *next;
    int color;
    int x;
    int y;
    int num;
    Node(int x,int y,int num);
    ~Node();
};

#endif // NODE
