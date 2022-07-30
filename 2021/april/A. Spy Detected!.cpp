#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x;
        map<int, int> mp;
        int ar[1001];
        for (int i = 0; i < x; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        for (int i = 0; i < x; i++)
        {
            if (mp[ar[i]] == 1)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}