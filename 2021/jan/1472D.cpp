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
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        a = b = 0;
        vector<ll> v(n);
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for (i = 0; i < n; i++)
        {
            x = v[i];
            if (i & 1)
            {
                if (x & 1)
                {
                    b += x;
                }
            }
            else
            {
                if (!(x & 1))
                {
                    a += x;
                }
            }
        }
        if (a == b)
        {
            cout << "Tie" << endl;
        }
        else if (a > b)
        {
            cout << "Alice" << endl;
        }
        else if (b > a)
        {
            cout << "Bob" << endl;
        }
    }
}
