#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int main(){
    cout<<"Enter the number of node : ";
    int node;
    cin>>node;
    cout<<"Enter the number of edge : ";
    int edge;
    cin>>edge;

    for(int i=0;i<edge;i++){
        int a,b;
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
