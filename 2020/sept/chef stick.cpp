#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int>mp;
int main()
{
    int t=4;
    ll siz=0;
    while(t--)
    {
        ll n,x;
        cin>>x;
        mp[x]=1;
        siz=mp.size();

    }
    cout<<4-siz<<endl;
    return 0;
}
