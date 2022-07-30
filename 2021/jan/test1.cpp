#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 9 << endl;
        }
        else if (n == 2)
        {
            cout << 98 << endl;
        }
        else if (n == 3)
        {
            cout << 989 << endl;
        }
        else
        {
            cout << 989;
            n -= 3;
            for (int i = 0; i <= 9 and n != 0; i++)
            {
                cout << i;
                n--;
                if (n != 0 and i == 9)
                {
                    i = -1;
                }
            }
            cout << endl;
        }
        }
}