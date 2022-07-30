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
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
int main()
{
    cin >> m >> s;
    string mx = "";
    string mn = "";
    if (s == 0)
    {
        if (m == 1)
        {
            cout << 0 << " " << 0;
            return 0;
        }
        else
        {
            cout << -1 << " " << -1;
            return 0;
        }
    }
    for (i = 0; i < m; i++)
    {
        k = min(s, 9);
        mx.pb('0' + k);
        s -= k;
    }
    if (s > 0)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    for (i = m - 1; i >= 0; i--)
    {
        mn.pb(mx[i]);
    }
    j = 0;
    while (mn[j] == '0')
    {
        j++;
    }
    mn[0]++;
    mn[j]--;
    cout << mn << " " << mx << endl;
}
