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
int tt,i,n;
int main()
{
    cin>>tt;
    int v[1001];
    while(tt--)
    {
        int a=0;
        int b=0;
        int cnt=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        for(i=1;i<=n;i++)
        {
            if(v[i]==1)
            {
                a=i;
                break;
            }
        }
        for(i=n;i>0;i--)
        {
            if(v[i]==1)
            {
                b=i;
                break;
            }
        }
        for(i=a;i<=b;i++)
        {
            if(v[i]==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
