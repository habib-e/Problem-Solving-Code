#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, x;
        cin >> n >> s;
        int sum = 0, in = 0, cnt = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (sum <= s)
            {
                if (x > mx)
                {
                    mx = x;
                    in = i;
                }
                sum += x;
            }
        }
        if (sum <= s)
            cout << 0 << endl;
        else
        {
            cout << in + 1 << endl;
        }
    }
}