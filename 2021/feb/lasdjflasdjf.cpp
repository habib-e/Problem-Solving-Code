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
string a;
int t,i;
int main(){

    cin>>t;
    while(t--){
        cin>>a;
        for(i=0;i<a.size();i++){
            if(a[i]=='a' and i%2==0){
                cout<<'b';
                continue;
            }
            else if(i%2==0){
                cout<<'a';
                continue;
            }
            if(a[i]=='z' and i%2==1){
                cout<<'y';
                continue;
            }
            else if(i%2==1){
                cout<<'z';
                continue;
            }
        }
        cout<<endl;

    }
    return 0;
}
