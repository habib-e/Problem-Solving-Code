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
        int ara[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ara[i];
        }

        int count = 0;

        int sub[100000];
        int i, j;
        for (int s = 0; s < n; s++)
        {

            for (int e = s; e < n; e++)
            {
                for (i = s, j = 0; i <= e; i++, j++)
                {
                    sub[j] = ara[i];
                }
                if (is_sorted(sub, sub + j))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
