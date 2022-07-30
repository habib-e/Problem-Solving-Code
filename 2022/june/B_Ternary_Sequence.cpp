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
        ll x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        cout << (min(z1, y2) * 2) << nn;
    }
    return 0;
}