#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
// print the max number in the array using recursion
ll max_rec(ll n)
{
    if (n == 0)
        return ar[1];
    ll temp = max_rec(n - 1);
    if (temp > ar[n])
        return temp;
    return ar[n];
}
int32_t main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    cout << max_rec(n) << nn;

    return 0;
}