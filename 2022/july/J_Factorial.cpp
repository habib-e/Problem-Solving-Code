#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
// print factorial using recursion
ll fact_rec(ll n)
{
    if (n == 0)
        return 1;
    return n * fact_rec(n - 1);
}
int32_t main()
{
    ll n;
    cin >> n;
    cout << fact_rec(n) << nn;

    return 0;
}