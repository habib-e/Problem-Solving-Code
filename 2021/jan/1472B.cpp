#include <bits/stdc++.h>
using namespace std;
//memset(ar,-1,sizeof(ar));
#define sort(x) sort(x.begin(), x.end())
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
    cin >> t;
    while (t--)
    {
        a = b = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> x;
            (x == 2 ? b++ : a++);
        }
        cout << ((a & 1) || (b & 1 and a <= 1) ? "NO" : "YES") << endl;
        // bool eq = false;
        // int one = 0, two = 0;
        // cin >> n;
        // vector<int> v;
        // for (i = 0; i < n; i++)
        // {
        //     cin >> x;
        //     v.pb(x);
        //     if (x == 1)
        //         one++;
        //     else
        //         two++;
        // }
        // sort(v);
        // if (v[0] == v[n - 1])
        // {
        //     eq = true;
        //     if ((v[0] == 1) and (one % 2 == 0))
        //     {
        //         yes;
        //         continue;
        //     }
        //     else if ((v[0] == 2) and (two % 2 == 0))
        //     {
        //         yes;
        //         continue;
        //     }
        // }
        // if ((one + (two * 2)) % 2 == 0 and !eq)
        //     yes;
        // else
        //     no;
    }
}