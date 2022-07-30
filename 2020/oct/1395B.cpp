#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
#define ll long long
#define fucka " "
#define nn "\n"
#define cnst 1000004
#define         yes                  cout<<"YES\n"
#define         no                   cout<<"NO\n"
int main()
{
    ll t,i,j,d,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        if(d<=n)
        {
            yes;
            continue;
        }
        bool bani=false;
        for(i=1; i<=cnst; i++)
        {
            ll sum=0;
            double take=0.0;
            int b=i+1;
            sum+=i;
            take=(d/(double)b);
            sum+=ceil(take);
            if(sum<=n)
            {
                yes;
                bani=true;
                break;
            }

        }
        if(!bani)
            no;

    }
    return 0;
}
