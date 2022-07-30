#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
// print array sum using recursion
ll sum_rec(ll n)
{
    if (n == 0)
        return 0;
    return ar[n] + sum_rec(n - 1);
}
int32_t main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    cout << sum_rec(n) << nn;

    return 0;
}