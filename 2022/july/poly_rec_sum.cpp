#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
int sum_poly(int i, int n, int x)
{
    if (n == 0)
        return 1;
    if (i < n)
        return (int)pow(x, i) + sum_poly(i + 1, n, x);
    return 0;
}
int32_t main()
{
    int n, x;
    cin >> x >> n;
    cout << sum_poly(0, n, x) << nn;
    return 0;
}