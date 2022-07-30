#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
int ar[MAX];
vector<ll> v;
void func(int i, int j, int *n, int *a)
{
    if (i == *n)
    {
        *n = j; // resize n
        return;
    }
    if (a[i] % 2 == 0)
        a[j++] = a[i];
    func(i + 1, j, n, a);
}

int32_t main()
{
    int n;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    func(0, 0, &n, ar);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}