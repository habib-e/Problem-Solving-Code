
#include<bits/stdc++.h>
using namespace std;
//memset(ar,-1,sizeof(ar));
//#define         sort(x)              sort(x.begin(),x.end())
//sort(a,a+n,greater<ll>())
typedef         long long            ll;
typedef         long double          ld;
typedef         unsigned long long   ull;
#define         pb                   push_back
#define         PB                   pop_back
#define         nn                   "\n"
#define 	FASTIO 		ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define         all(p)               p.begin(),p.end()
#define         zz(v)                (ll)v.size()
#define         ss                   ' '
#define         arrsize(a)           (sizeof(a)/sizeof(a[0]))
#define         S(a)                 scanf("%lld",&a)
#define         SS(a,b)              scanf("%lld %lld",&a,&b)
#define         SS(a,b,c)            scanf("%lld %lld %lld",&a,&b,&c)
#define         gcd(a,b)             __gcd(a,b)
#define         lcm(a,b)             (a*b)/gcd(a,b)
#define         pi                   acos(-1.0)
typedef         pair <int,int>       pii;
typedef         pair <ll,ll>         pll;
typedef         vector< pair <ll,ll> >    vpll;
typedef         vector<ll>           vll;
typedef         map<string,ll>       msl;
typedef         map<ll,ll>           mll;
#define         yes                  cout<<"YES\n"
#define         no                   cout<<"NO\n"
#define         MAX                  1000005
#define         mod                  1000000007
#define         siz                 100004
vector<ll>vec;
ll sign(ll X)
{
    if(X>0)
        return 1;
    return -1;
}
ll calc()
{
    ll x,n;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        vec.pb(x);
    }
    ll mx_sum=0,pres=0,j=0;
    for(ll i=0;i<n;i++)
    {
        pres=vec[i];
        j=i;
        while(j<n and sign(vec[i])==sign(vec[j]))
        {
            pres=max(pres,vec[j]);
            j++;
        }
        mx_sum+=pres;
        i=j-1;
    }
    vec.clear();
    return mx_sum;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        cout<<calc()<<endl;
    }

    return 0;
}
