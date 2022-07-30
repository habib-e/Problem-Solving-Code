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
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5+50;
const int M = 1e6;
const ll oo = 1e18;
const int mod = 1e9+7;
#define precision(a) fixed << setprecision(a)
int main()
{
    fast;
    int n,m;
    cin>>n>>m;
    vector<set<int>> adj(n+1);
    while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    int ans=0;
    vector<bool> is(n,false);
    for(int i=1;i<=n;i++){
        if(adj[i].lower_bound(i)==adj[i].end()){
            ans++;
            is[i]=1;
        }
    }
    int q;
    cin>>q;
    while(q--){
        int type,u,v;
        cin>>type;
        if(type==3){
            cout<<ans<<endl;
        }
        else{
            cin>>u>>v;
            if(is[u])
                ans--;
            if(is[v])
                ans--;
            if(type==1){
                adj[u].insert(v);
                adj[v].insert(u);
            }
            else{
                adj[u].erase(v);
                adj[v].erase(u);
            }
            if(adj[u].lower_bound(u)!=adj[u].end())
                is[u]=0;
            else
                is[u]=1;
            if(adj[v].lower_bound(v)!=adj[v].end())
                is[v]=0;
            else
                is[v]=1;
            if(is[u]) ans++;
            if(is[v])
                ans++;
        }
    }

    return 0;
}






















