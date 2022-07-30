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
        int a, b;
        string aa, bb, cc = "";
        cin >> a >> b;
        vector<string> s;
        while (a or b)
        {
            if (a)
            {
                cc += '0';
                a--;
            }
            if (b)
            {
                cc += '1';
                b--;
            }
            if (a <= 0 and b <= 0)
                break;
        }
        // for (int i = 0; i < a; i++)
        // {
        //     cc += '0';
        // }
        // for (int i = 0; i < b; i++)
        // {
        //     cc += '1';
        // }
        cout << cc << nn;
    }
    return 0;
}