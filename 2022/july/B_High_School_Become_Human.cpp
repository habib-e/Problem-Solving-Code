
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define O_O                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
const ll mod = 1000000007;
// ll iterative_power(ll a, ll n)
// {
//     ll ans = 1;
//     while (n)
//     {
//         if (n % 2 == 1)
//             ans = (1LL * (ans % mod) * (a % mod)) % mod;
//         a = (1LL * (a % mod) * (a % mod)) % mod;
//         n /= 2;
//     }
//     return ans;
// }
int32_t main()
{
    O_O;

    double a, b;
    cin >> a >> b;
    // ll ans = pow1(a % mod, b % mod);
    // ll a1 = iterative_power(a, b);
    // ll a2 = iterative_power(b, a);
    double x = b * log(a) - a * log(b);

    if (x > 0)
        cout << ">" << nn;
    else if (x < 0)
        cout << "<" << nn;
    else
        cout << "=" << nn;

    return 0;
}
