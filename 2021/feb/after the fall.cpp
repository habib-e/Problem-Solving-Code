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
#define IS_SET(a, b) ((((a & (1 << b)) >> b) > 0 ? 1 : 0))
#define SET(a, b) ((a |= (1 << b)))
#define CLEAR(a, b) ((a &= ~(1 << b)))

int AND(int a, int b)
{
    int i;
    int c = 0;
    for (i = 0; i < sizeof(int); i++)
    {
        if (IS_SET(a, i) && IS_SET(b, i))
        {
            SET(c, i);
        }
        else
        {
            CLEAR(c, i);
        }
    }
    return c;
}

int main()
{
    int a = 10;
    int b = 30;
    //Basic UNIT test!
    if ((a & b) == AND(a, b))
    {
        cout << (a & b) << endl;
    }
    else
    {
        printf("Test fail!");
    }
}