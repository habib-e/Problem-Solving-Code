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
#define mod 1000000007
/*template<class T>bool umin(T& a,T b){if(a>b){a=b;return 1;}return 0;} //umin(ans,i);
template<class T>bool umax(T& a,T b){if(a<b){a=b;return 1;}return 0;}//umax(ans,i);*/
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        bool ha = false;
        r = c = n;
        string ss[n];
        for (i = 0; i < r; i++)
        {
            ss[i].clear();
        }
        for (i = 0; i < r; i++)
        {
            cin >> ss[i];
        }
        for (i = 0; i < r - 1; i++)
        {
            for (j = 0; j < c - 1; j++)
            {
                if (ss[i][j] == '1')
                {

                    if ((ss[i][j + 1] == '1') or (ss[i + 1][j] == '1'))
                    {
                        continue;
                    }
                    else
                    {
                        ha = true;
                        break;
                    }
                }
            }
            if (ha)
            {
                break;
            }
        }
        if (!ha)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
//Yuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
/*
    arawtahd
    issajeluvohsinijysae
    otiohssojelkahtuobredoc
*/