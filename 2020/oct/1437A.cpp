#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,i;
        cin>>l>>r;
//        if(l+1==r)
//        {
//            cout<<"NO"<<endl;
//            continue;
//        }
        bool f=false;
        for(i=l; i<=r; i++)
        {
            ll x=l%i;
            ll y=i/2;
            if(x>=y)
            {
                cout<<"YES"<<i<<endl;
                f=true;
                break;
            }
        }
        if(!f) cout<<"NO"<<endl;
    }
}
