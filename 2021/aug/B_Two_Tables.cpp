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

    ll W,H,w,h,x1,x2,y1,y2;
    cin>>W>>H;
    cin>>x1>>y1>>x2>>y2;
    cin>>w>>h;
    ll w1,h1;
    w1=x2-x1;
    h1=y2-y1;
    int ansh=INT_MAX,answ=INT_MAX;
    if(h+h1<=H || w+w1<=W){
        if(h+h1<=H){
            ansh = min(h-y1,h-(H-y2));
            if(ansh<0){
                ansh=0;
            }
        }
        if(w+w1<=W){
            answ = min(w-x1,w-(W-x2));
            if(answ<0){
                answ=0;
            }
        }
        double res = min(ansh,answ);
        printf("%.9lf\n",res);
    }
    else{
        cout<<-1<<endl;
    }
    
    }

return 0;
}