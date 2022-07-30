#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t,n;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c>>n;
        ll p = max(a,max(b,c));
        ll need = p-a;
        need+=(p-b);
        need+=(p-c);
        need=n-need;
        if(need%3!=0 || need<0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
 
 
 
 
    return 0;
}