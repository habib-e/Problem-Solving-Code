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
        int n;
        cin >> n;
        int mn = INT_MAX;
        int mn_in;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> arr[i];
            if (arr[i] < mn)
            {
                mn = arr[i];
                mn_in = i;
            }
        }
        if (n & 1)
            cout << "Mike" << nn;
        else
        {
            if (mn_in & 1)
                cout << "Mike" << nn;
            else
                cout << "Joe" << nn;
        }
    }
    return 0;
}