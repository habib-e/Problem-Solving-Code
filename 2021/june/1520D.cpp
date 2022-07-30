
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        unordered_map<ll,ll>mp;
        ll ans =0;
        for(ll i=0; i<n; i++)
        {
            cin>>ar[i];
            mp[ar[i]-(i+1)]++;
        }
        for(auto a : mp)
        {
            ll x = a.second;
            ans+=(x*(x-1))/2;
        }
        cout<<ans<<endl;
    }
}
