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
ll table[200505][22],diff[200005];
void sparseTablePrecalc(ll n){
    for(ll i=1;i<=n;i++){
        table[i][0]=diff[i];
    }
    for(ll k=1;k<=22;k++){
        for(ll i=1;i+(1<<k)-1<=n;i++){
            table[i][k]=__gcd(table[i][k-1],table[i+(1<<(k-1))][k-1]);
        }
    }
}
ll query(ll l,ll r){
    ll len=r-l+1;
    ll k=log2(len);
    return __gcd(table[l][k],table[r-(1<<k)+1][k]);
}
bool isPossible(ll x,ll n){
    for(ll i=1;i+x-1<=n;i++){
        if(query(i,i+x-1)>=2){
            return true;
        }
    }
    return false;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){

    ll n;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }
    n--;
    for(ll i=1;i<=n;i++){
        diff[i]=abs(ar[i]-ar[i-1]);
    }
    sparseTablePrecalc(n);
    ll low=1,high=n,ans=0;
    while(low<=high){
        ll mid = (low+high)/2;
        ll isPossibleOrNot=isPossible(mid,n);
        if(isPossibleOrNot){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans+1<<endl;

    /*
    ai%m=ai+1%m=..........aj%m
    ai%m-ai+1%m=0
    abs(ai-ai+1) % m ==0 
    1 5 2 4 6

    4 3 2 2 

    gcd of these difference subarray should be >=m(2)
    each subarray choose work in binary search subarray.


    */







    }

return 0;
}
