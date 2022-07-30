#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
int32_t main()
{
    ll n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        if (i != 1)
            cout << i << " ";
        else
            cout << i;
    }
    return 0;
}