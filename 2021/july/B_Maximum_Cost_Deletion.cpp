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

        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int ans = a*n;
        if(b<=0){
            int cnt0=0,cnt1=0,z=0,i;
            for(i=0;i<n;i++){
                if(s[i]=='0'){
                    while(s[i]=='0' and i<n){
                        i++,z++;
                    }
                    cnt0++;
                }
            }
            if(z!=n)
            cnt0++;
            int o=0;
            for(i=0;i<n;i++){
                if(s[i]=='1'){
                    while(s[i]=='1' and i<n){
                        i++,o++;
                    }
                    cnt1++;
                }
            }
            if(o!=n)
            cnt1++;
            int cnt = min(cnt0,cnt1);
            ans+=b*cnt;
        }
        else{
            ans+=b*n;
        }
        cout<<ans<<endl;
    }

return 0;
}