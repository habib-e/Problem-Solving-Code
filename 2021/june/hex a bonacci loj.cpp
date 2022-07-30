#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a,b,c,d,e,f,t,n,ij=1;
    scanf("%lld",&t);
    while(t--){
        ll ar[10005];
        scanf("%lld %lld %lld %lld %lld %lld %lld",&ar[0],&ar[1],&ar[2],&ar[3],&ar[4],&ar[5],&n);
        for(ll i=6;i<=n;i++){
            ar[i]=(ar[i-1]+ar[i-2]+ar[i-3]+ar[i-4]+ar[i-5]+ar[i-6])%10000007;
        }
        printf("Case %d: %lld\n",ij++,ar[n]%10000007);
    }


}
