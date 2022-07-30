#include <bits/stdc++.h>
using namespace std;
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//#define rsort(x) sort(x.rbegin(), x.rend())
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
#define pp ' '
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define S(a) scanf("%lld", &a)
#define SS(a, b) scanf("%lld %lld", &a, &b)
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
ll ar[100001];
int main()
{
    cin >> n >> t;
    ll ans = 0, sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
        while (sum > t)
        {
            sum -= ar[j++];
        }
        ans = max(ans, i - j + 1);
    }
    cout << ans;
    // sort(v + 1, v + n + 1);
    // for (i = 0; i <= n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // for (i = 1; i <= n; i++)
    // {
    //     v[i] = (v[i] + v[i - 1]);
    //     if (v[1] > t)
    //     {
    //         cout << 0;
    //         return 0;
    //     }
    //     else if (n == 1 and v[1] < t)
    //     {
    //         cout << 1;
    //         return 0;
    //     }
    //     if (v[i] > t)
    //     {
    //         cout << i - 1;
    //         return 0;
    //     }
    //     else
    //     {
    //         if (i == n)
    //         {
    //             cout << n;
    //             return 0;
    //         }
    //         continue;
    //     }
    // }
}
