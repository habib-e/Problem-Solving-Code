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
template <typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &a)
{
    in >> a.fr >> a.sc;
    return in;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &out, pair<T1, T2> a)
{
    out << a.fr << " " << a.sc;
    return out;
}
template <typename T, typename T1>
T amax(T &a, T1 b)
{
    if (b > a)
        a = b;
    return a;
}
template <typename T, typename T1>
T amin(T &a, T1 b)
{
    if (b < a)
        a = b;
    return a;
}
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
        cin >> n;
        vector<ll> r(n + 1), pre(n + 1);
        for (i = 1; i < n + 1; i++)
        {
            cin >> r[i];
            r[i] += r[i - 1];
        }
        cin >> m;
        vector<ll> b(m + 1);
        for (i = 1; i < m + 1; i++)
        {
            cin >> b[i];
            b[i] += b[i - 1];
        }
        c = 0;
        for (i = 0; i < n + 1; i++)
        {
            for (j = 0; j < m + 1; j++)
            {
                amax(c, r[i] + b[j]);
            }
        }
        cout << c << endl;
    }
}

/*
    arawtahd
    issajeluvohsinijysae
    otiohssojelkahtuobredoc
    if(distraction and demotivate and foolishness had a face)
        I am the perfect example for them.
*/

//Copied

/* Final check before submit :
 
1. array size or integer overflow,like uninitialised 0 index.
 
2. Think twice,code once.check all possible counter test case.
 
3. Be careful about corner case! n=1?k=1? something about 0?
 
4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?
 
5. if got WA than remember that you are missing something common.
   *** Be confident!!! who knows? may be your one step back to AC ***
4. minus mod ans=(ans-k+mod)%mod;
 
*/

/* IF WA???
 
1. corner case! n=1?k=1? something about 0?
 
2. check code(avoid stupid mistake)
 
3. read the statement again(if there any missing point???)
 
4. check the idea(check all possible counter test case again!!!)
 
5. be calm,don't be panic!!!.(***this problem not going to decide your future***)
 
6. don't waste too much time. move to next problem
 
*/