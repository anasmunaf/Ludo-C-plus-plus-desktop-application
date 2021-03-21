#ifndef BOARD
#define BOARD

#include<iostream>
#include<graphics.h>
#include"Graph.h"
using namespace std;

class Board
{
private:

public:
    Board();
    ~Board();
    void create();
    void fillings();
    Graph* createGraph();
};
#endif // BOARD
