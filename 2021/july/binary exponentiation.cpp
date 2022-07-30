#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000000
ll power(ll base,ll n)
{
    ll result = 1;
    while(n)
    {
        if(n%2==1)
        {
            result = (result*base)%mod;
            n--;
        }
        else
        {
            base=(base*base)%mod;
            n/=2;
        }
    }
    return result;
}
int main()
{
    ll a=1378,b;
    cin>>b;
    cout<<power(a,b)%10<<endl;
    return 0;
}
