/* ***Bismillahir Rahmanir Rahim*** */
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
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define point(a) fixed << setprecision(a)
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define CLR(p) memset(p, 0, sizeof(p))
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
ll pow1(ll base, ll x) { ll ans = 1; for (ll i = 1; i <= x; i++) ans *= base; return ans; }
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


ll a[1000006];
int main()
{
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
	ll t;
	cin >> t;
	vector<ll>v[10];
	for (ll i = 1; i <= 100; i++) {
		ll q = i, p = 1;
		cout<<"Start q "<<q<<"Start p "<<p<<nn;
		while (q >= 10) {
			cout<<"Inside while q "<<q<<nn;
			if ((q % 10) > 0) {
				p *= (q % 10);
				cout<<"Inside while after * p "<<p<<nn;
			}
			q /= 10;
		}
		cout<<"Last p and q "<<p<<" "<<q<<"p*q "<<p*q<<nn;
		p*=q;
		
		if (p >= 10) {
			cout<<"a[p"<<p<<"] "<<a[p]<<nn;
			p = a[p];
		}
		cout<<"a[i"<<i<<"] "<<a[i]<<nn;
		a[i]=p;
		cout<<"last last p "<<p<<nn;
		v[p].push_back(i);
		cout<<"i "<<i<<nn;
		//debug(i);
	}
	while(t--){
		ll l,r,k;
		cin>>l>>r>>k;
		cout<<upper_bound(v[k].begin(),v[k].end(),r) - lower_bound(v[k].begin(),v[k].end(),l)<<nn; 
	}
	return 0;
}
