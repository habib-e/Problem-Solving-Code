#include<bits/stdc++.h>
using namespace std;
#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100];
int node,edge;
void dfsVisited(int x)
{
    color[x]=GRAY;
    for(int i=0;i<node;i++)
    {
        if(adj[x][i]==1)
        {

            if(color[i]==WHITE)
            {
                dfsVisited(i);
            }
        }
    }
    color[x]=BLACK;
    cout<<"color["<<x<<"]"<<color[x]<<endl;
}

void dfs()
{
    for(int i=0;i<node;i++)
    {
        color[i]=WHITE;
    }
    for(int i=0;i<node;i++)
    {
        if(color[i]==WHITE)
        {
            dfsVisited(i);
        }
    }
}

int main()
{
    cin>>node>>edge;
    int n1,n2;
    for(int i=0;i<edge;i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    dfs();

}
