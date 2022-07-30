#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
// print binary representation of a number
void printBinary(ll n)
{
    if (n == 0)
    {
        return;
    }
    printBinary(n / 2);
    cout << n % 2;
}
int32_t main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        printBinary(x);
        cout << nn;
    }
    return 0;
}