#ifndef ADJLIST
#define ADJLIST
#include"Node.h"
struct AdjList
{
    struct Node *head;
    struct Node *tail;
    AdjList();
    ~AdjList();
};
#endif // ADJLIST
