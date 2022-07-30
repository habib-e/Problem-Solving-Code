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
template<class T>bool umin(T& a,T b)
{
    if(a>b)
    {
        a=b;    //umin(ans,i);
        return 1;
    }
    return 0;
}
template<class T>bool umax(T& a,T b)
{
    if(a<b)
    {
        a=b;    //umax(ans,i);
        return 1;
    }
    return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[n-1]=='0' and s[n-2]=='2' and s[n-3]=='0' and s[n-4]=='2')
            cout<<"YES"<<endl;
        else if(s[0]=='2' and s[n-1]=='0' and s[n-2]=='2' and s[n-3]=='0')
            cout<<"YES"<<endl;
        else if(s[0]=='2' and s[1]=='0' and s[n-2]=='2' and s[n-1]=='0')
            cout<<"YES"<<endl;
        else if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[n-1]=='0')
            cout<<"YES"<<endl;
        else if(s[0]=='2' and s[1]=='0' and s[2]=='2' and s[3]=='0')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
