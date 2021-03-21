#ifndef GRAPH
#define GRAPH
#include"AdjList.h"
#include"player.h"
class Graph
{

private:
    int v;
    struct AdjList* arr;
public:
    Graph(int v);
    ~Graph();
    void addEdge(Graph *graph,int u,int x,int y,int pos);
    void newLoc(Graph *graph,int x,int y,int call,class Player *clr);
    void addCoin(Graph *graph,int u,class Coin *temp,class Player *clr);
    int getX(Graph *graph,int i);
    int getY(Graph *graph,int i);
    int getClr(Graph *graph,int i);
};
#endif
