#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll findTrailingZeros(ll n)
{
    ll count = 0;
    for (ll i = 5; i <= n; i *= 5)
        count += n / i;

    return count;
}
int main()
{
    ll n;
    cin >> n;
    cout << findTrailingZeros(n);
    return 0;
}