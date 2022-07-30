
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
#define         SSS(a,b,c)            scanf("%lld %lld %lld",&a,&b,&c)
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







int a[100];
void work()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)scanf("%d",a+i),sum+=a[i]&1;
    cout<<sum<<endl;
    if(sum%2==0)
    {
        puts("YES");
        return;
    }
    sort(a,a+n);
    for(int i=1; i<n; i++)if(a[i]==a[i-1]+1)
        {
            puts("YES");
            return;
        }
    puts("NO");
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)work();
    return 0;
}





















