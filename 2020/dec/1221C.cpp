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
template<class T>bool umin(T& a,T b){if(a>b){a=b;return 1;}return 0;} //umin(ans,i);
template<class T>bool umax(T& a,T b){if(a<b){a=b;return 1;}return 0;}//umax(ans,i);

#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll c=0,i;
        for(i=s.size()-1;i>=0;i--)
        {
            if(s[i]==')')
                c++;
            else
                break;
        }
        if(c>(s.size()-c))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
