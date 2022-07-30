#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
ll fibo_rec(ll n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    return fibo_rec(n - 1) + fibo_rec(n - 2);
}
int32_t main()
{
    ll n;
    cin >> n;
    cout << fibo_rec(n) << nn;
    return 0;
}