#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
ll rec_pair(ll m, ll n)
{
    if (m >= n)
        return 1;
    cout << ar[m] << " " << ar[n] << nn;
    return rec_pair(m + 1, n - 1);
}

int32_t main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    rec_pair(1, n);
    if (n & 1)
        cout << ar[(n + 1) / 2] << " " << ar[(n + 1) / 2];

    return 0;
}