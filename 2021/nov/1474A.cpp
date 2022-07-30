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
int inp[NX] , lis[NX] , lds[NX] ;
int n ;
int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	fastio();
	const int NX = 505 ;

   // I will always use scanf and printf
   // May be i won't be a good programmer but i will be a good human being
    while( ~scanf("%d",&n) && n )
    {
        int i , j ;
        for ( i = 1 ; i <= n ; i++ )
        {
            scanf("%d",&inp[i]);

        }
        for ( i = n ; i >= 1 ; i-- )
        {
            lis[i] = lds[i] = 1 ;
            for ( j = n ; j > i ; j-- )
            {
                if( inp[i] <= inp[j] ) lis[i] = max( lis[i] , lis[j] + 1 );
                if( inp[i] >= inp[j] ) lds[i] = max( lds[i] , lds[j] + 1 );
            }
        }
        int ans = 0 ;
        for ( i = 1 ; i <= n ; i++ )
        {
            ans = max( ans , lis[i] );
            ans = max( ans , lds[i] );
            for ( j = i + 1 ; j <= n ; j++ )
            {
                if( inp[i] > inp[j] ) ans = max( ans , lis[i] + lds[j] );
                if( inp[i] < inp[j] ) ans = max( ans , lis[j] + lds[i] );
            }
        }
        printf("%d\n",ans);
    }
	return 0;
}
