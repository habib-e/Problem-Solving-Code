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
#define         _00_                 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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
#define         test                 int t, tc; cin>>t; for( tc = 1;tc <= t ; tc++)
long long t, n, a[200005], cnt, cum;
int main()
{
    _00_

    test
    {
        cin >> n;
		cnt = 0;
		cin >> a[0];
		if (a[0] == 1) cnt++;
		cum = 0;
		for (int i = 1; i < n; i++) {
			cin >> a[i];
			if (a[i] == 1) cum++;
			else {
				cnt += cum / 3;
				cum = 0;
			}
		}
		cnt += cum / 3;
		cout << cnt << '\n';

    }


    return 0;
}


























