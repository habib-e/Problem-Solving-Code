#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
ll sum_rec(ll n, ll m)
{
    if (m == 0)
        return 0;
    return ar[n - 1] + sum_rec(n - 1, m - 1);
}
int32_t main()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << sum_rec(n, m) << nn;

    return 0;
}