#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (mp[a[i]] == 0)
            mp[a[i]] = i + 1;
    }
    while (q--)
    {
        int t;
        cin >> t;
        int ans = mp[t];
        cout << mp[t] << " ";
        mp.erase(t);
        for (auto i : mp)
        {
            if (i.second < ans)
            {
                mp[i.first] = i.second + 1;
            }
        }
        mp[t] = 1;
    }
    cout << endl;
}