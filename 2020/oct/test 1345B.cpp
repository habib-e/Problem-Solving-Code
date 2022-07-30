#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define OO 1000000000

int main(){
    ll a,b,i,j,n,m,x=2,y,t,z;
    vector<ll>v;
    for(i=2;i<=OO;){
        v.push_back(i);
        x+=3;
        i+=x;
    }
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        ll ct=0;
        while(n>1){
            auto it=upper_bound(v.begin(),v.end(),n);
            cout<<"it : "<<*it<<endl;
            z=it-v.begin()-1;
            cout<<"z : "<<z<<endl;
            x=v[z];
            cout<<"x : "<<x<<endl;
            n-=v[z];
            cout<<"n : "<<n<<endl;
            ct++;
            cout<<"ct : "<<ct<<endl;
        }
        printf("%lld\n",ct);
    }

    return 0;
}

