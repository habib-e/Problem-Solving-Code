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
        ll n;
        cin >> n;
        ll a, b, c;
        cin >> a >> b >> c;
        if ((a == 3 and c == 2) or (a == 2 and b == 3) or (b == 1 and a == 3) or (b == 3 and c == 1) or (c == 1 and a == 2) or (c == 2 and b == 1))
        {
            cout << "YES" << nn;
        }
        else
        {
            cout << "NO" << nn;
        }
    }
    return 0;
}