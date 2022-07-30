#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, n;
        cin >> n >> x;
        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            n = ceil((n - 2) / x);
            cout << ++n << endl;
        }
    }
}