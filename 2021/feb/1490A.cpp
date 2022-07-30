#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, i, n;
    cin >> t;

    while (t--)
    {
        int ar[1000];
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        ll cnt = 0;
        for (i = 1; i < n; i++)
        {
            ll big = max(ar[i], ar[i - 1]);
            ll small = min(ar[i], ar[i - 1]);
            while (big > 2 * small)
            {
                cnt++;
                small = 2 * small;
            }

            // if (ar[i] < ar[i + 1])
            // {
            //     dif = ar[i + 1] - ar[i];
            //     while (dif > ar[i])
            //     {
            //         cnt++;
            //         dif /= 2;
            //         cout<<dif<<" ";
            //     }
            // }
            // else if (ar[i] > ar[i + 1])
            // {
            //     dif = ar[i] - ar[i + 1];
            //     while (dif > ar[i + 1])
            //     {
            //         cnt++;
            //         dif /= 2;
            //         cout<<dif<<" ";
            //     }
            // }
        }
        cout << cnt << endl;
    }
}
