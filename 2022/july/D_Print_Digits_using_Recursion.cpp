#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];

// print digit using recursion
void print_digit(ll n)
{
    if (n == 0)
        return;
    print_digit(n / 10);
    cout << n % 10 << " ";
}
int32_t main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        if (x == 0)
            cout << "0";
        else
            print_digit(x);
        cout << nn;
    }
    return 0;
}