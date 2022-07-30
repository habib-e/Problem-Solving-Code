#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    vector<int>v,va;
    ll n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>j;
        v.push_back(j);
        va.push_back(j);
    }
    sort(va.begin(),va.end());
    //operation
    cout<<v.at(3)<<endl;
    cout<<v.back()<<endl;
    cout<<v.front()<<endl;
    swap(v,va);
    for(i=0;i<va.size();i++){
        cout<<va[i]<<endl;
    }
    for(i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    if(v.empty()){
        cout<<"Empty"<<endl;
    }
    v.erase(v.begin()+2);
    cout<<v.size()<<endl;
    v.push_back(2);
    v.push_back(4);
    cout<<v.size();
    cout<<v.capacity()<<endl;
    v.emplace_back(33);



    return 0;
}
