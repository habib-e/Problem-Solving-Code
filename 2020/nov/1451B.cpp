#include<bits/stdc++.h>
using namespace std;
typedef       long long int    ll;
typedef      long double   ld;
typedef     vector<ll>      vll;
#define     fi              first
#define     print(v)        for(ll i:v) cout<<i<<ss
#define     se              second
#define     pb              push_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     ss              ' '
#define     pii             pair<ll,ll>
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
const double eps = 1e-7;
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while(q--)
        {
            string tp="";
            ll l,r;
            cin>>l>>r;
            for(ll i=l-1; i<r; i++)
                tp+=s[i];

            ll f=0;

              cout<<tp<<nn;
            char c1=tp.back();
            for(ll i=r; i<n; i++)
            {
                if(s[i]==c1)
                    f=1;
            }
               cout<<c1<<ss;
            c1=*tp.begin();
             cout<<c1<<nn;
            for(ll i=0; i<l-1; i++)
            {
                cout<<99;
                if(s[i]==c1)
                    f=1;
            }
            if(f)
                cout<<"YES"<<nn;
            else
                cout<<"NO"<<nn;
        }

    }
}

