#include <bits/stdc++.h>
using namespace std;
//memset(ar,-1,sizeof(ar));
//#define         sort(x)              sort(x.begin(),x.end())
//sort(a,a+n,greater<ll>())
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define pb push_back
#define PB pop_back
#define nn "\n"
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define all(p) p.begin(), p.end()
#define zz(v) (ll) v.size()
#define ss ' '
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define S(a) scanf("%lld", &a)
#define SS(a, b) scanf("%lld %lld", &a, &b)
#define SSS(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi acos(-1.0)
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pair<ll, ll>> vpll;
typedef vector<ll> vll;
typedef map<string, ll> msl;
typedef map<ll, ll> mll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define MAX 1000005
ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
const int N = 2e5 + 50;
const int M = 1e6;
const ll oo = 1e18;
const int mod = 1e9 + 7;

int ar[N];
int fa(int ar[], int n, int x)
{
    unordered_map<int, bool> mp;
    for (i = 0; i < n; i++)
    {
        if (mp[ar[i]] == true)
        {
            return 0;
        }
        mp[ar[i]] = true;
    }
    int br[n];
    for (i = 0; i < n; i++)
    {
        br[i] = (ar[i] & x);
    }
    mp.clear();
    for (i = 0; i < n; i++)
    {
        if (ar[i] != br[i])
        {
            mp[br[i]] = true;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (mp[ar[i]] == true)
        {
            return 1;
        }
    }
    mp.clear();
    for (i = 0; i < n; i++)
    {
        if (mp[br[i]] == true)
        {
            return 2;
        }
        mp[br[i]] = true;
    }
    return -1;
}
int main()
{
    cin >> n >> x;
    h = 0;
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
        // br[i] = (ar[i] & x);
        // cr[i] = ar[i];
    }
    cout << fa(ar, n, x);

    //sort(cr, cr + n);

    // if (ar[0] == br[0] and ar[n - 1] == br[n - 1])
    // {
    //     cout << -1;
    //     return 0;
    // }
    // for (i = 0; i < n; i++)
    // {
    //     cout << br[i] << " ";
    // }
    // cout << nn << nn << nn;
    // for (i = 0; i < n; i++)
    // {
    //     if (ar[i] == br[i])
    //     {
    //         cout << 1;
    //         return 0;
    //     }
    // }
    // for (i = 1; i < n; i++)
    // {
    //     if (cr[i] == cr[i - 1])
    //     {
    //         h++;
    //         break;
    //     }
    // }
    // if (h == 0)
    // {
    //     cout << -1;
    //     return 0;
    // }
    // else
    // {
    //     cout << 0;
    //     return 0;
    // }
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         if (ar[i] == br[j])
    //         {
    //             cout << 2;
    //             return 0;
    //         }
    //     }
    // }
    // cout << -1;
    return 0;
}