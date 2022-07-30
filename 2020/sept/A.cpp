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
#define         O_O                  ios_base::sync_with_stdio(false); cin.tie(NULL)
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
vector<int>o,e;
int main()
{

    int t,k,l;
    cin>>t;
    while(t--)
    {
        e.clear();
        o.clear();
        cin>>k;
        cin>>l;
        string s=to_string(l);
        if(s.size()%2==0)
        {
            for(int i=1; i<s.size(); i+=2)
            {
                int take=s[i]-'0';
                e.push_back(take);
            }
            sort(e.begin(),e.end());
            int Left=e[0];
            if(Left%2==0) cout<<2<<endl;
            else cout<<1<<endl;
        }
        else if(s.size()%2!=0)
        {
            for(int i=0; i<s.size(); i+=2)
            {
                int take=s[i]-'0';
                o.push_back(take);
            }
            sort(o.begin(),o.end());
            int Left=o[0];
            if(Left%2!=0)
                cout<<1<<endl;
            else cout<<2<<endl;
        }

    }
    return 0;
}
