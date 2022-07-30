///*    ***Bismillahir Rahmanir Rahim***   */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double dl;
typedef unsigned long long ull;
#define pb push_back
#define PB pop_back
#define nn "\n"
#define O_O                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(p) p.begin(), p.end()
#define zz(v) (ll) v.size()
#define ss ' '
#define sz(x) (ll) x.size()
#define ppb pop_back
#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(p) memset(p, 0, sizeof(p))
#define precision(a) fixed << setprecision(a)
#define for0(i, b) for (ll i = 0; i < (b); i++)
#define for1(i, b) for (int i = 1; i <= (b); i++)
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define S(a) scanf("%lld", &a)
#define dbug(vari) cerr << #vari << = << (vari) << endl
#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))
#define lowBit(S) (S & (-S))
#define setAll(S, n) (S = (1 << n) - 1)
#define SS(a, b) scanf("%lld %lld", &a, &b)
#define SSS(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi acos(-1.0)
#define ff first
#define sc second
#define print(v)   \
    for (ll i : v) \
    cout << i << ss
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pair<ll, ll>> vpll;
typedef vector<ll> vll;
typedef map<string, ll> msl;
typedef map<ll, ll> mll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif
ll secondmax(ll a, ll b, ll c)
{
    ll ar[3];
    ar[0] = a, ar[1] = b, ar[2] = c;
    sort(ar, ar + 3);
    return ar[1];
}
#define MOD 1000000007
void debug1(string s)
{
    cout << s << nn;
}
void debug1(char s) { cout << s << nn; }
void debug1(ll s) { cout << s << nn; }
void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(dl t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << " ";
    _print(p.sc);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
ll pow1(ll base, ll x)
{
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
        ans *= base;
    return ans;
}
#define MAX 1000005
#define mod 1000000007
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first and (a.second > b.second))
        return true;
    else if ((a.first < b.first))
        return true;
    else
        return false;
}
void solve()
{
    int n;
    scanf("%d", &n);
    pair<int, int> p[n + 3];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &p[i].first, &p[i].second);
    }
    sort(p + 1, p + n + 1, comp);
    for (int i = 1; i <= n; i++)
    {
        printf("%d %d\n", p[i].first, p[i].second);
    }
}
signed main()
{
    int tt;
    scanf("%d", &tt);
    while (tt--)
    {
        solve();
    }
    return 0;
}
// int32_t main()
// {
//     O_O ;
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         ll x,y;
//         vector< pair <int,int> > v;
//         for(ll i=0;i<n;i++){
//             cin>>x>>y;
//             v.push_back( make_pair(x,y) );
//         }
//         ll ft,st,fft,sst;
//         for(ll i=0;i<n;i++){
//             ft = v[i].first;
//             st = v[i].second;
//             for(ll j=i;j<n;j++){
//                 fft=v[j].first;
//                 sst = v[j].second;
//                 if(ft>fft or (ft==fft and st<sst)){
//                     swap(v[i].first,v[j].first);
//                     swap(v[i].second,v[j].second);
//                 }
//             }
//         }
//         for(ll i=0;i<n;i++){
//             cout<<v[i].first<<" "<<v[i].second;
//         }
//         nl;

//     }
//     return 0;
// }
