/*    ***Bismillahir Rahmanir Rahim***   */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
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
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define S(a) scanf("%lld", &a)
#define SS2(a, b) scanf("%lld %lld", &a, &b)
#define SS3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
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
const int N = 2e5 + 50;
const int M = 1e6;
const ll oo = 1e18;
const int mod = 1e9 + 7;
#define precision(a) fixed << setprecision(a)
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int i, j, x, sum1 = 0, sum2 = 0, n;
        cin >> n;
        int a[n+2],b[n+2];
        vector<int> inc, dec;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        for (i = 1; i <= n; i++)
        {
            if (b[i] > a[i])
            {
                x = b[i] - a[i];
                for (j = 1; j <= x; j++)
                {
                    inc.pb(i);
                }
                sum1 += x;
            }
            else if (b[i] < a[i])
            {
                x = a[i] - b[i];
                for (j = 1; j <= x; j++)
                {
                    dec.pb(i);
                }
                sum2 += x;
            }
        }
        if (sum1 != sum2)
            cout << -1 << endl;
        else if (sum1 == 0)
            cout << 0 << endl;
        else
        {
            cout << sum1 << endl;
            for (i = 0; i < inc.size(); i++)
                cout << dec[i] << " " << inc[i] << endl;
        }
    }

    return 0;
}