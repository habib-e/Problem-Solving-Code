
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    queue<int>q;
    priority_queue<int>pq;
    for(int i=0,k;i<n;i++){
        cin>>k;

        q.push(k);
        k*=(-1);
        pq.push(k);
    }
    cout<<"q: ";
    while(!q.empty()){
        cout<<" "<<q.front();
        q.pop();
    }
    cout<<"pq : ";
    while(!pq.empty()){
        cout<<" "<<pq.top()*(-1);
        pq.pop();
    }
    cout<<endl;


    return 0;
}
