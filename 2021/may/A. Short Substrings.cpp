#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;

    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a;
        for (i = 0; i < a.size(); i++)
        {
            if (i == 0 || i == a.size() - 1)
            {
                b += a[i];
            }
            else if (i % 2 == 0)
            {
                b += a[i];
            }
        }
        cout << b << endl;
    }
}