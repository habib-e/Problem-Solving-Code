#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll egcd(ll a,ll b){
    if(b<=0) return a;
    return egcd(b,a%b);
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<egcd(a,b)<<endl;
    }

}
