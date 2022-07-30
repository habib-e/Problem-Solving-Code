#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define O_O                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define yes cout << "YES\n"
#define no cout << "NO\n"
int32_t main()
{
    O_O;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[2 * n + 5], b[n];
        for (ll i = 0; i < (2 * n); i++)
        {
            cin >> a[i];
        }
        bool flag = true;
        ll ans = 0;
        sort(a, a + (2 * n));
        // for (ll i = 0; i < (2 * n); i++)
        // {
        //     cout << a[i] << " ";
        // }
        for (ll i = 0; i < (2 * n); i++)
        {
            if (abs(a[i] - a[n + i]) >= x)
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            yes;
        else
            no;
    }
    return 0;
}
