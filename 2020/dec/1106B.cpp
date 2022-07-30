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
/*template<class T>bool umin(T& a,T b){if(a>b){a=b;return 1;}return 0;} //umin(ans,i);
template<class T>bool umax(T& a,T b){if(a<b){a=b;return 1;}return 0;}//umax(ans,i);*/
ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
const int N = 2e5 + 50;
const int M = 1e6;
const ll oo = 1e18;
const int mod = 1e9 + 7;

int main()
{
    cin >> t;
    while (t--)
    {
        l = r = q = 0;
        string s;
        cin >> s;
        a = s.size();
        if (s[0] != ')' and s[a - 1] != '(')
        {
            for (i = 0; i < a; i++)
            {
                if (s[i] == '(')
                {
                    l++;
                }
                if (s[i] == ')')
                {
                    l--;
                }
                if (s[i] == '?')
                {
                    if (l != 0)
                    {
                        l--;
                    }
                    else if (r != 0)
                    {

                        q--;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
            if (l == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
/*
    arawtahd
    issajeluvohsinijysae
    otiohssojelkahtuobredoc
*/
