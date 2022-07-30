#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
int32_t main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = n - max(a + 1, n - b) + 1;
    cout << ans << nn;

    return 0;
}