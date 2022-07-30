#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];

int32_t main()
{
    string s;
    cin >> s;
    ll n = s.size();
    set<char> se;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        se.insert(s[i]);
        mp[s[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}