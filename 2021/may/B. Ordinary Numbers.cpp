#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n, x = 0;
    cin >> n;
    for (ll i = 1; i <= n; i = i * 10 + 1)
    {
        for (int j = 1; j < 10; j++)
        {
            if (i * j <= n)
            {
                x++;
            }
        }
    }
    cout << x << endl;
}

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        solve();
    }
    return 0;
}