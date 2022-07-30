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
        if (((n % 2 == 0) and ((int)(sqrt(n / 2) * (int)sqrt(n / 2)) == n / 2)) or ((n % 4 == 0) and (((int)sqrt(n / 4) * (int)sqrt(n / 4)) == n / 4)))
            cout << "YES" << nn;
        else
            cout << "NO" << nn;
    }
    return 0;
}