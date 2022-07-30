#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int fp(ll x,ll y, ll p){
    ll ans = 1;
    x%=p;
    if(x==0){
        return 0;
    }
    while(y>0){
        if(y&1){
            ans = (ans * x) % p;
        }
        y/=2;
        x = (x*x) % p;

    }
    return ans;

}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<fp(2,n-1,mod)<<endl;

    }


}
