#include <bits/stdc++.h>
using namespace std;
long long power(long long b, long long p, long long m)
{
    long long ret = 1;
    while (p)
    {
        if (p & 1)
            ret = ((ret % m) * (b % m)) % m;
        p >>= 1;
        b = ((b % m) * (b % m)) % m;
    }
    return ret;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long b, p, m;
    while (cin >> b >> p >> m)
    {
        cout << power(b, p, m) << '\n';
    }
    return 0;
}