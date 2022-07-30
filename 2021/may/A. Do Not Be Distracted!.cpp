#include <bits/stdc++.h>
using namespace std;
#define L long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a = 0, i;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (i = 0; i < n; i++)
        {
            if (mp[s[i]] == 0)
            {
                mp[s[i]]++;
                while (s[i] == s[i + 1] and i + 1 < n)
                {
                    i++;
                }
            }
            else
            {
                a = 1;
            }
        }
        if (a)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        mp.clear();
    }
}