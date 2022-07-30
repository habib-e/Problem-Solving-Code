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
ll ar[MAX], br[MAX];
int32_t main()
{
    O_O;
    ll t;
    cin >> t;
    while (t--)
    {

        ll n, mm = INT_MIN, mn = INT_MAX, mni = 0, mmi = 0;
        cin >> n;
        vll(v);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
        }
        unordered_map<ll, stack<ll>> ms;
        for (ll i = 1; i <= n; i++)
        {
            ms[v[i - 1]].push(i);
        }
        bool flag = true;
        vector<ll> res(n);
        for (auto i : ms)
        {
            if (i.second.size() == 1)
            {
                cout << -1 << nn;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (ll i = 1; i <= n; i++)
            {
                ll z;
                if (ms[v[i - 1]].top() == i)
                {
                    z = ms[v[i - 1]].top();
                    ms[v[i - 1]].pop();
                    res[i - 1] = ms[v[i - 1]].top();
                    ms[v[i - 1]].pop();
                    ms[v[i - 1]].push(z);
                }
                else
                {
                    res[i - 1] = ms[v[i - 1]].top();
                    ms[v[i - 1]].pop();
                }
            }
            for (au to ii : res)
            {
                cout << ii << " ";
            }
            cout << nn;
        }

        // for (ll i = 0; i < n; i++)
        // {
        //     cin >> ar[i];
        //     br[i] = i + 1;
        //     if (ar[i] <= mn)
        //     {
        //         mn = ar[i];
        //         mni = i;
        //     }
        //     if (ar[i] >= mm)
        //     {
        //         mm = ar[i];
        //         mmi = i;
        //     }
        // }
        // for (ll i = 0; i < n; i++)
        // {
        //     if(i+1!=mn){
        //         br[i]=i+1;
        //     }
        //     else{

        //     }
        //     cin >> ar[i];
        //     br[i] = i + 1;
        //     mm = max(ar[i], mm);
        //     mn = min(ar[i],mn);
        // }
        // if (mm > n or n == 1)
        // {
        //     cout << -1 << nn;
        // }
        // else
        // {

        //     if (mm - 1 >= n)
        //     {
        //         for (ll i = 0, j = mn + 1; i <= n; i++, j++)
        //         {
        //             if (i != mni)
        //             {
        //                 cout << j << " ";
        //             }
        //         }
        //         cout << nn;
        //     }
        //     else
        //         cout << -1 << nn;
        // if (n % 2 == 0)
        // {
        //     for (ll i = n - 1; i >= 0; i--)
        //     {
        //         cout << br[i] << " ";
        //     }
        //     cout << nn;
        // }
        // else
        // {
        //     swap(br[0], br[n / 2]);
        //     for (ll i = n - 1; i >= 0; i--)
        //     {
        //         cout << br[i] << " ";
        //     }
        //     cout << nn;
        // }
    }
    return 0;
}
