#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int masize=2e5+5;
int ar[masize];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i;
        cin>>n>>k;
        ll x,y,s=0,r=0,a=0,b=0,lx,ly,ans=0,cnt=0;
        cin>>lx>>ly;
        for(i=1;i<n;i++){
            cin>>x>>y;
            ans=abs(lx-x)+abs(ly-y);
            if(ans<=k)
                cnt++;
            lx=x;
            ly=y;

        }
        if(k<n)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(cnt>=(n-1))
            cout<<1<<endl;


    }

    return 0;
}
