/*    ***Bismillahir Rahmanir Rahim***   */
#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
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

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll ar[n];
		for(ll i=0;i<n;i++)
			cin>>ar[i];
		ll p=ar[0],q=ar[1];
		for(ll i=0;i<n;i+=2)
			p=__gcd(p,ar[i]);
		for(ll i=1;i<n;i+=2)
			q = __gcd(q,ar[i]);
		bool flg1=true,flg2=true;
		for(ll i=0;i<n;i+=2){
			if(ar[i]%q==0){
				flg2=false;break;
			}
			
		}
		for(ll i=1;i<n;i+=2){
			if(ar[i]%p==0){
				flg1=false;break;
			}
			
		}
		if(flg1 or flg2)
			cout<<(flg1?p:q)<<endl;
		else
			cout<<0<<endl;


	}

	return 0;
}
