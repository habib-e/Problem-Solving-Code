#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        unordered_map<int, int> mp;
        vector<int> ar(n + 1);
        for (i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        h = 0;
        for (i = 0; i <= n * 2; i++)
        {
            if (mp[ar[i]] == 1)
            {
                h++;
            }
            else if (mp[mp[i] - 1] > 1)
            {
                h--;
            }
            else
            {
                h += 2;
            }
        }
        cout << h << endl;
    }

    return 0;
}