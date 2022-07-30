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
ll pow1(ll base, ll x){ ll ans = 1; for (ll i = 1; i <= x; i++) ans *= base; return ans; }
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
#define int long long
int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
        // just for learning purps (prefix sum collab with binary search, it's fun)
        int n,days;
        cin>>n>>days;
        int a[2*n+2];
        int pre1[2*n+2], pre2[2*n+2];
        pre1[0]=pre2[0]=a[0]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            a[n+i]=a[i];
        }
        for(int i=1;i<=2*n;i++){
            pre1[i]=pre1[i-1]+((a[i]*(a[i]+1))/2);
            pre2[i]=pre2[i-1]+a[i];
        }
        int mx = 0;
        for(int i=2*n;i>=n+1;i--){
            int low = 1;
            int high = i;
            int ans = i;
            while(low<=high){
                int mid = (low+high)/2;
                if(pre2[i] - pre2[mid] <days){
                    ans = mid;
                    high = mid-1;
                }
                else low  = mid +1;

            }
            int temp = pre2[i] - pre2[ans - 1] -days;
            int sum = pre1[i] - pre1[ans - 1];
            sum -= (temp * (temp + 1))/2;
            mx =  max(mx,sum);

        }
        cout<<mx<<nn;
        return 0;
    }
    
