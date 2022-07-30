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
        string s;
        cin >> s;
        int z = 0, o = 0;
        if ((n == 2))
        {
            if ((s[0] == '0' and s[1] == '1') or (s[0] == '1' and s[1] == '0'))
                cout << 3 << nn;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                z++;
            }
            else
                o++;
        }
        int zsum = 0;
        int osum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zsum += (o);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                osum += (z);
            }
        }
        if (z == n or o == n)
        {
            cout << n << nn;
        }
        else
        {
            cout << zsum + osum << nn;
        }
    }
    return 0;
}