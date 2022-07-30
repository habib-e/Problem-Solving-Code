#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
// print reverse of array using recursion
void rec_rev(ll n)
{
    if (n == 0)
        return;
    cout << ar[n] << " ";
    rec_rev(n - 1);
}
int32_t main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    rec_rev(n);
    return 0;
}