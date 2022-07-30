#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define x 10
int cost[10][10],i,j,k,n,qu[10],stk[10],front,top,rare,v,visit[10],visited[10];
void dfs()
{
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            cost[i][j]=0;
        }
    }
    int m;
    cout<<"In DFS : "<<endl;
    cout <<"Enter no of vertices:";
    cin >> n;
    cout <<"Enter no of edges:";
    cin >> m;
    cout <<"\nEDGES \n";
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        cost[i][j]=1;
    }
    cout <<"Enter initial vertex to traverse from:";
    cin >>v;
    cout <<"DFS ORDER OF VISITED VERTICES:";
    cout << v <<" ";
    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=n; j>=1; j--)
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                stk[top]=j;
                top++;
            }
        v=stk[--top];
        cout<<v << " ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
}
void bfs()
{
    int m;
    cout<<"In BFS : "<<endl;
    cout <<"Enter no of vertices:";
    cin >> n;
    cout <<"Enter no of edges:";
    cin >> m;
    cout <<"\nEDGES \n";
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        cost[i][j]=1;
    }
    cout <<"Enter initial vertex to traverse from : ";
    cin >>v;
    cout <<"Visitied vertices:";
    cout <<v<<" ";
    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=1; j<=n; j++)
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                qu[rare++]=j;
            }
        v=qu[front++];
        cout<<v <<" ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
}

int main()
{
    bfs();
    cout<<endl;
    memset(qu,0,sizeof(qu));
    memset(stk,0,sizeof(stk));
    memset(visit,0,sizeof(visit));
    memset(visited,0,sizeof(visited));
    dfs();
    return 0;
}
