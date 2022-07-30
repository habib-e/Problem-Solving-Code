
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
//vector<pair<int,int> >vp;
//map<int,int>mp;
//struct compare
//{
//    bool operator()(const pair<int, int>& value,
//                    const int& key)
//    {
//        if(key > value.second)
//            return value.first;
//    }
//    bool operator()(const int& key,
//                    const pair<int, int>& value)
//    {
//        if(key < value.second)
//            return value.first;
//    }
//};
int con[2000010];
int main()
{
    ll n,m,i,j,x;
    S(n);
    int take=0;
    for(i=0; i<n; i++)
    {
        cin>>x;
        for(j=0; j<x; j++)
        {
            con[++take]=i+1;
//            mp.insert(make_pair(i,j+take));
//            vp.push_back(make_pair(i,j+take));
        }
//        --j;
//        take+=j;
    }
//    for(i=0;i<vp.size();i++)
//    {
//        cout<<vp[i].first<<" "<<vp[i].second<<endl;
//    }
//    for(int i=0;i<100;i++) cout<<con[i]<<endl;
//    cout<<endl<<endl;
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>x;
        cout<<con[x]<<endl;
//        for(const auto& [key,value] : mp)
//        {
//            if(value==x)
//            {
//                cout<<key<<endl;
//
//            }
//        }

//        auto result = find_if(mp.begin(),mp.end(),[x](const auto& mo)
//        {
//            if(mo.second == x){
//                                return mo.first;
//                              }
//        });
//        cout<<result->first<<endl;
//        int y=binary_search(vp.begin(),vp.end(),x,compare());
//        cout<<y<<endl;
//        for(j=0;j<vp.size();j++)
//        {
//            if(vp[j].second==x)
//                cout<<vp[j].first<<endl;
//        }
    }
    return 0;
}
