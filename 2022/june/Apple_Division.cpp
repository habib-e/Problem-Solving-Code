/***
**      Bismillahir Rahmanir Rahim
**              ALLAHU AKBAR
**
**     Author: Habib (imhabib)
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
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
int32_t main()
{
    O_O;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll ans = 1e18;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll suma = 0, sumb = 0;
        for (int pos = 0; pos < n; pos++)
        {
            if (mask & (1 << pos))
                suma += v[pos];
            else
                sumb += v[pos];
        }
        ans = min(ans, abs(suma - sumb));
    }
    cout << ans << nn;
    // ll n;
    // cin >> n;
    // ll v[100];
    // for (ll i = 1; i <= n; i++)
    // {
    //     cin >> v[i];
    // }
    // vll(odl);
    // vll(odr);
    // ll osum = 0, esum = 0, odlsum = 0, odrsum = 0;
    // sort(v + 1, v + n + 1);
    // if (n % 2 == 0)
    // {
    //     for (ll i = 1, j = n; i <= n / 2 and j > n / 2; i++, j--)
    //     {
    //         if (i & 1)
    //         {
    //             odlsum += (v[i] + v[j]);
    //             debug(v[i]);
    //             debug(v[j]);
    //         }
    //         else
    //         {
    //             odrsum += (v[i] + v[j]);
    //             debug(v[i]);
    //             debug(v[j]);
    //         }
    //     }
    //     cout << abs(odrsum - odlsum) << nn;
    // }
    // else
    // {
    //     for (ll i = 2, j = n; i <= n / 2 and j > n / 2; i++, j--)
    //     {
    //         if (i % 2 == 0)
    //         {
    //             odlsum += (v[i] + v[j]);
    //         }
    //         else
    //         {
    //             odrsum += (v[i] + v[j]);
    //         }
    //     }
    //     if (odrsum < odlsum)
    //     {
    //         odrsum += v[1];
    //     }
    //     else
    //         odlsum += v[1];

    //     cout << abs(odrsum - odlsum) << nn;
    // }
    return 0;
}
