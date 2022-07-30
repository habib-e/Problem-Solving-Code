#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];

int32_t main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        ll n = s.size();
        ll m = t.size();
        for (ll i = 0; i < min(n, m); i++)
        {
            cout << s[i] << t[i];
        }
        if (n > m)
        {
            for (ll i = min(n, m); i < n; i++)
            {
                cout << s[i];
            }
        }
        else
        {
            for (ll i = min(n, m); i < m; i++)
            {
                cout << t[i];
            }
        }
        cout << nn;
    }
    return 0;
}