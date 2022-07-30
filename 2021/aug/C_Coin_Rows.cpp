/*    ***Bismillahir Rahmanir Rahim***   */
#include<bits/stdc++.h>
using namespace std;
typedef         long long            ll;
typedef         long double          ld;
typedef         unsigned long long   ull;
#define         pb                   push_back
#define         PB                   pop_back
#define         nn                   "\n"
#define 		 O_O 				  ios_base::sync_with_stdio(false); cin.tie(NULL)
#define         all(p)               p.begin(),p.end()
#define         zz(v)                (ll)v.size()
#define         ss                   ' '
#define         arrsize(a)           (sizeof(a)/sizeof(a[0]))
#define         S(a)                 scanf("%lld",&a)
#define         SS2(a,b)              scanf("%lld %lld",&a,&b)
#define         SS3(a,b,c)            scanf("%lld %lld %lld",&a,&b,&c)
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
const int N = 2e5+50;
const int M = 1e6;
const ll oo = 1e18;
const int mod = 1e9+7;
#define precision(a) fixed << setprecision(a)
int main()
{ 
    ll t;
    cin>>t;
    while(t--){

    ll n;
    cin>>n;
    ll ar[n+1],br[n+1];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        cin>>br[i];
    }
    ll pre1[n+1],pre2[n+1];
    pre1[0]=ar[0];
    for(int i=1;i<n;i++){
        pre1[i]=pre1[i-1]+ar[i];
    }
    pre2[0]=br[0];
    for(int i=1;i<n;i++){
        pre2[i]=pre2[i-1]+br[i];
    }
    pre1[n]=pre1[n-1];
    ll ans = pre1[n-1]-pre1[0];
    for(int i=1;i<n;i++){
        ll a = pre2[i-1];
        ll b = pre1[n-1]-pre1[i];
        ans=min(ans,max(a,b));
    }
    cout<<ans<<endl;
    }

return 0;
}