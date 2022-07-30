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
#define mod 1000000007
/*template<class T>bool umin(T& a,T b){if(a>b){a=b;return 1;}return 0;} //umin(ans,i);
template<class T>bool umax(T& a,T b){if(a<b){a=b;return 1;}return 0;}//umax(ans,i);*/
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> vx(n);
        // vx.clear();
        // vy.clear();
        // vz.clear();
        vector<int> v;
        //bool ar[n] = {false};
        // bool br[n] = {false};
        for (i = 0; i < n; i++)
        {
            cin >> vx[i];
            // vx[i] = x;
            // vy[i] = x;
            //h = min(h, vx[i]);
            //ar[x] = true;
        }
        h = *min_element(vx.begin(), vx.end());
        //sort(vy);
        j = 0;
        for (i = 0; i < n; i++)
        {
            a = gcd(vx[i], h);
            if (a == h)
            {
                v.pb(vx[i]);
                vx[i] = -1;
                //vz[j++] = vx[i];
                //br[i] = true;
            }
        }
        //sort(vz);
        sort(v);
        j = 0;
        for (i = 0; i < n; i++)
        {
            if (vx[i] == -1)
            {
                vx[i] = v[j];
                j++;
            }
        }
        bool ans = true;
        for (i = 0; i < n - 1; i++)
        {
            if (vx[i + 1] >= vx[i])
            {
                continue;
            }
            else
            {
                cout << "NO" << endl;
                ans = false;
                break;
            }
        }
        // for (i = 0; i < n; i++)
        // {
        //     cout << "vx[" << i << "] =" << vx[i] << " ";
        //     cout << endl;
        // }
        // for (i = 0; i < n; i++)
        // {
        //     cout << "vy[" << i << "] =" << vy[i] << " ";
        //     cout << endl;
        // }
        // for (i = 0; i < n; i++)
        // {
        //     cout << "vz[" << i << "] =" << vz[i] << " ";
        // }
        // cout << endl;
        // for (i = 0; i < n; i++)
        // {
        //     cout << "br[" << i << "] =" << br[i] << " ";
        // }
        //cout << endl;
        if (ans)
        {
            cout << "YES" << endl;
        }
    }
}
//Yuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
/*
    arawtahd
    issajeluvohsinijysae
    otiohssojelkahtuobredoc
*/

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
 
 Copied
*/