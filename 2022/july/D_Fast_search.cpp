#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
int32_t main()
{
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    ll k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        ll l, r;
        cin >> l >> r;
        cout << upper_bound(ar, ar + n, r) - lower_bound(ar, ar + n, l) << " ";
    }
    return 0;
}