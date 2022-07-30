#include <bits/stdc++.h>
using namespace std;
//memset(ar,-1,sizeof(ar));
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define nn "\n"
#define ss ' '
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define yes cout << "YES\n"
#define no cout << "NO\n"
ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
const int N = 2e5 + 50;
const int M = 1e6;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        char x[n][n];
        int a1 = -1, b1 = -1, a2 = -1, b2 = -1;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> x[i][j];
                if (x[i][j] == '*')
                {
                    if (a1 == -1)
                    {
                        a1 = i, b1 = j;
                    }
                    else
                    {
                        a2 = i, b2 = j;
                    }
                }
            }
        }
        if (a1 == a2)
        {               //2 * in a same row
            if (a1 > 0) //edge case
            {
                x[a1 - 1][b1] = '*', x[a2 - 1][b2] = '*';
            }
            else
            {
                x[a1 + 1][b1] = '*', x[a2 + 1][b2] = '*';
            }
        }
        else if (b1 == b2)
        {
            if (b1 > 0)
            {
                x[a1][b1 - 1] = '*', x[a2][b2 - 1] = '*';
            }
            else
            {
                x[a1][b1 + 1] = '*', x[a2][b2 + 1] = '*';
            }
        }
        else
        {
            x[a2][b1] = '*';
            x[a1][b2] = '*';
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << x[i][j];
            }
            cout << endl;
        }
    }
}
