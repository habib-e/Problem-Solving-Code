#include<iostream>
using namespace std;
bool vis[100]={false};
vector<int>adj[100];
void dfs(int v){
    vis[v]=true;
    cout<<v<<" ";
    for(int i=0;i<adj[v.size()],i++){
        int child = adj[v][i];
        if(child){
            continue;
        }
        else{
            dfs(child);
        }
    }
}
int main(){
    
}