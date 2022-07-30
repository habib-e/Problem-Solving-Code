#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll cnt=0,cach=0;
        for(i=1;i<=1000000000;i++)
        {
            if(i%3)
            {
                cach=i;
                cnt++;
            }
            if(cnt==k)
            {
                cout<<i<<endl;
                cach=cnt=0;
                break;
            }
        }
    }
}
