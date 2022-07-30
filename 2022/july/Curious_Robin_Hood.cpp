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
int tree[MAX];
int arr[MAX];
int BIT_QUERY(int idx)
{
    int sum = 0;
    while (idx > 0)
    {
        sum += tree[idx];
        idx -= idx & -idx;
    }
    return sum;
}
void BIT_Update(int n, int idx, int val)
{
    while (idx <= n)
    {
        tree[idx] += val;
        idx += (idx & -idx);
    }
}
void BIT_Build(int n)
{
    for (int i = 1; i <= n; i++)
        BIT_Update(n, i, arr[i]);
}
int32_t main()
{
    O_O;
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        int n, q;
        cin >> n >> q;
        tree[0] = 0;
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[j];
            tree[j] = 0;
        }
        BIT_Build(n);
        cout << "Case " << i << ":\n";

        while (q--)
        {
            int l, r, type;
            cin >> type;
            if (type == 1)
            {
                cin >> l;
                int val = arr[l + 1];
                arr[l + 1] = 0;
                cout << val << nn;
                BIT_Update(n, l + 1, -val);
            }
            else if (type == 3)
            {
                cin >> l >> r;
                int val = BIT_QUERY(r + 1) - BIT_QUERY(l);
                cout << val << nn;
            }
            else
            {
                int val, loc;
                cin >> loc >> val;
                arr[loc + 1] = arr[loc + 1] + val;
                BIT_Update(n, loc + 1, val);
            }
        }

        // cout << "Case " << i << ": " << nn;
        // ll n, q;
        // cin >> n >> q;
        // ll a[n];
        // for (ll j = 0; j < n; j++)
        // {
        //     cin >> a[j];
        // }
        // ll poor = 0;
        // while (q--)
        // {
        //     poor = 0;
        //     ll x;
        //     cin >> x;
        //     if (x == 1)
        //     {
        //         ll ith;
        //         cin >> ith;
        //         poor += a[ith];
        //         a[ith] = 0;
        //         cout << poor << endl;
        //     }
        //     else if (x == 2)
        //     {
        //         ll ith, val;
        //         cin >> ith >> val;
        //         a[ith] += val;
        //     }
        //     else if (x == 3)
        //     {
        //         ll l, r, ans = 0;
        //         cin >> l >> r;
        //         for (ll i = l; i <= r; i++)
        //         {
        //             ans += a[i];
        //         }
        //         cout << ans << endl;
        //     }
        // }
    }
    return 0;
}
