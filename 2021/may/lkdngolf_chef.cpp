#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
int main(){
    ll t;
    cin>>t;
    ll x,k,N;
    while(t--){
        cin>>N>>x>>k;
        if(((N+1)-(x))%k==0){
            yes;
        }
        else if(x%k==0){
            yes;
        }
        else{
            no;
        }
    }


    return 0;
}
