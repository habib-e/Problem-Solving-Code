#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, i, t, h, a;
    cin >> n >> q;
    int v[n + 10];
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (i = 0; i < q; i++)
    {
        cin >> t >> h;
        if (t == 1)
        {
            v[h - 1] = 1 - v[h - 1];
        }
        else
        {
            sort(v, v + n);
            reverse(v, v + n);
            cout << v[h - 1] << endl;
        }
    }
}