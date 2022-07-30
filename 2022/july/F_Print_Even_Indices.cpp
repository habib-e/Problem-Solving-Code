#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
// print even indices of an array in reverse order using recursion

void rec_rev(ll i, ll n)
{
    if (n % 2 != 0)
    {
        if (i == n + 1)
            return;
    }
    else
    {
        if (i == n)
            return;
    }
    rec_rev(i + 2, n);
    cout << ar[i] << " ";
}
int32_t main()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    rec_rev(0, n);
    // if (n & 1)
    //     cout << ar[0];

    return 0;
}