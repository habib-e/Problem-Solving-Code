#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX], ar1[MAX], ar2[MAX], br[MAX];
int32_t main()
{
    ll n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        br[i] = ar[i];
    }
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (ar[i] > ar[i + 1])
        {
            ans += (ar[i] - ar[i + 1]);
            // ar[i + 1] = ans;
            ar1[i + 1] = ans;
        }
        else
        {
            ar1[i + 1] = ans;
        }
    }
    ans = 0;
    for (ll i = n - 1; i >= 1; i--)
    {
        if (br[i] < br[i + 1])
        {
            ans += (br[i + 1] - br[i]);
            // br[i] = ans;
            ar2[i] = ans;
        }
        else
        {
            ar2[i] = ans;
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << ar1[i] << " ";
    // }
    // cout << nn;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << ar2[i] << " ";
    // }
    // cout << nn;

    while (m--)
    {
        ll s, t;
        cin >> s >> t;
        if (s < t)
        {
            cout << abs(ar1[t] - ar1[s]) << nn;
            // cout << ar1[t] << nn;
        }
        else
        {
            cout << abs(ar2[t] - ar2[s]) << nn;
            // cout << ar2[s] << nn;
        }
    }
    return 0;
}