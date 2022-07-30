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
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n+1];
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mn=min(ar[i],mn);
            mx=max(ar[i],mx);
        }
        int mnpos=0,mxpos=0;
        for(int i=0;i<n;i++){
            if(ar[i]==mn){
                mnpos=i+1;
            }
            if(ar[i]==mx){
                mxpos=i+1;
            }
        }
        int x,y;
        if(mnpos>mxpos){
            x=mxpos;
            y=mnpos;
        }
        else{
            x=mnpos;
            y=mxpos;
        }
        int res = min(y,n-x+1);
        res = min(res,x+n-y+1);
        cout<<res<<endl;
    }
    return 0;
}
