#include"Graph.h"

Graph::Graph(int v):v(v)
{
    arr=new AdjList[v];
}
Graph::~Graph()
{

}

void Graph::addEdge(Graph *graph,int u,int x,int y,int pos)
{
    Node *temp= new Node(x,y,pos);
    if(graph->arr[u].head==NULL)
    {
       graph->arr[u].head=temp;
       graph->arr[u].tail=temp;
    }
    else
    {
       graph->arr[u].tail->next=temp;
       graph->arr[u].tail=graph->arr[u].tail->next;
    }
}

void Graph::newLoc(Graph *graph,int x,int y,int call,class Player *clr)
{
    int num=0;
    for (int i = 0; i < v; ++i)
    {
        Node *p=graph->arr[i].head;

        if(p->x<x+25&&p->x>x-25&&p->y<y+25&&p->y>y-25)
        {
            if(i+call>51)
            {
                num=(i+call)-52;
            }
            else
                num=i+call;
            Coin *temp=p->member.top();
            p->member.pop();
            addCoin(graph,num,temp,clr);
            temp=NULL;
            break;
        }

    }
}

void Graph::addCoin(Graph *graph,int u,Coin *temp,class Player *clr)
{
    int num=temp->coinNumber();
    int color=temp->getCoinClr();
    Node *p=graph->arr[u].head;

    if(p->member.empty()==1)
    {
        p->member.push(clr->setMember(p->x,p->y,num,color,temp));
        p->color=p->member.top()->getCoinClr();
    }
    else
    {
        if(p->color==color)
        {
            p->member.push(clr->setMember(p->x,p->y,num,color,temp));
        }
        else
        {
            while(p->member.empty()!=1)
            {
                clr->addMember(p->member.top());
                p->member.pop();
            }
            p->member.push(clr->setMember(p->x,p->y,num,color,temp));
            p->color=temp->getCoinClr();
        }
    }
}

int Graph::getX(Graph *graph,int i)
{
    return graph->arr[i].head->x;
}
int Graph::getY(Graph *graph,int i)
{
    return graph->arr[i].head->y;

}
int Graph::getClr(Graph *graph,int i)
{
    if(graph->arr[i].head->member.empty()==0)
        return graph->arr[i].head->color;
}
