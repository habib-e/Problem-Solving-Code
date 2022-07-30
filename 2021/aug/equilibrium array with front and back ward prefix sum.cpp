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
int equi(int ar[],int n){
    if(n==1){
        return (0);
    }
    int frw[n]={0};
    int bkw[n]={0};
    int i=0,j=0;
    frw[0]=ar[0];
    for(i=1;i<n;i++){
        frw[i] = frw[i-1]+ar[i];
    }
    bkw[n-1]=ar[n-1];
    for(i=n-2;i>=0;i--){
        bkw[i]=bkw[i+1]+ar[i];
    }
    for(i=0;i<n;i++){
        if(frw[i]==bkw[i]){
            return i;
        }
    }
    return -1;
}

int main()
{ 
    int ar[]={ -7, 1, 5, 2, -4, 3, 0};
        int ar_size = sizeof(ar)/sizeof(ar[0]);
        cout<<equi(ar,ar_size);
    

return 0;
}