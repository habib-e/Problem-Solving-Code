#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
long long fun(int w, int h, int n)
{
    long long l = 1, r = 1e18, m;
    while (l <= r)
    {
        m = l + (r - l) / 2;
        if (1.0L * (m / w) * (m / h) < 1.0L * n)
            l = m + 1;
        else
            r = m - 1;
    }
    return l;
}
int32_t main()
{
    ll n, w, h;
    cin >> w >> h >> n;
    cout << fun(w, h, n);
    return 0;
}