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

        ll n, m;
        cin >> n >> m;
        n = 2 * n - 1;
        string s[n + 2];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        string ans ="";
        for(int i=0;i<m;i++){
            map<char,int>mp;
            for(int j = 0;j<n;j++){
                if(mp[s[j][i]]==0){
                    mp[s[j][i]]=1;
                }
                else{
                    mp[s[j][i]]=0;
                }
            }
            for(auto it : mp){
                if(it.second!=0){
                    ans+=it.first;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
