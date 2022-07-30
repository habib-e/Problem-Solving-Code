#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
vector<int>edges[MAX];
vector<int>gadgets[MAX];
bool visited[MAX];
void dfs(int node){
    visited[node]=true;
    cout<<node<<" ";
    for(auto it : edges[node])
    {
        if(!visited[it]){
            dfs(it);
        }
    }
}
void bfs()
{
    fill(begin(visited),end(visited),false);
    //fill(begin(edges),end(edges),0);
    //edges.clear();
//    vector<int>::iterator it;
//    it=edges.begin();
//    for(;it!=edges.end();it++)
//        edges.erase(it);
    queue<int>q;
    q.push(1);
    visited[1]=true;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        for(auto it: edges[q.front()])
        {
            if(!visited[it])
            {
                q.push(it);
                visited[it]=1;
            }
        }
        q.pop();
    }


}
int main()
{
    cout<<"Enter the no Edges : ";
    int edge;
    cin>>edge;
    cout<<"Enter the Edges : ";
    for(int i=0;i<edge;i++)
    {
        int u,v;
        cin>>u>>v;
        edges[u].emplace_back(v);
        edges[v].emplace_back(u);
        gadgets[u].emplace_back(v);
        gadgets[v].emplace_back(u);
    }
    cout<<"Enter the node to started : ";
    int n;
    cin>>n;
    cout<<"DFS : ";
    //dfs(n);
    for(int i=1;i<=edge;i++)//for disconnected edges
    {
        if(!visited[i])
        {
            dfs(i);
        }
    }
    cout<<" BFS : ";
    bfs();



}
