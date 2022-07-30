#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
int r, c;
int a[105][105];
int b[105][105];
int32_t main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> b[i][j];
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i][j] + b[i][j] << " ";
        cout << '\n';
    }
    return 0;
}