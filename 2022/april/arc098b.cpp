/*    ***Bismillahir Rahmanir Rahim***   */
#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MAX 1000005
#define INF 1e18
#define nn "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define PI 3.141592653589793238462
#define all(x) (x).begin(), (x).end()
#define point(a) fixed << setprecision(a)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define zz(v) (ll) v.size()
#define sz(x) (ll) x.size()
#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(p) memset(p, 0, sizeof(p))
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
ll pow1(ll base, ll x) { ll ans = 1; for (ll i = 1; i <= x; i++) ans *= base; return ans; }
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
ll ar[200005];
ll br[200005];
int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
	ll n;
	cin >> n;
	ll l=1,r=1,ans=0;
	for (ll i = 1; i <= n; i++) {
		cin>>ar[i];
		br[i]=ar[i];
		ar[i]+=ar[i-1];
		br[i]^=br[i-1];
	}
	while(r<=n){		
		if(ar[r]-ar[l-1]==br[r]^br[l-1]){
			ans+=(r-l+1);
			r++;
		}
		else
			l++;
	}
	cout<<ans<<nn;
	return 0;
}
