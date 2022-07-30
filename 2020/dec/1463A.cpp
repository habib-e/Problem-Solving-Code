#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll allDigitsDivide(ll n)
{
    while(true)
    {
        ll m=n;
        while(m>0)
        {
            ll rem=m%10;
//            cout<<"rem : "<<rem<<endl<<"m : "<<m<<endl;
            if(rem!=0 and n%rem !=0)
            {
//                cout<<"hi"<<endl;
                break;
            }
            m/=10;

        }
//        cout<<"bi"<<endl;
        if(m==0)
        {
            return n;
            break;
        }
        n++;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<allDigitsDivide(n)<<endl;
    }

    return 0;
}
