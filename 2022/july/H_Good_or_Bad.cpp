#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
// check string has "101" or "010" substring
bool check(string s)
{
    for (int i = 0; i < s.size() - 2; i++)
    {
        if (s[i] == '0' and s[i + 1] == '1' and s[i + 2] == '0')
        {
            return true;
        }
        else if (s[i] == '1' and s[i + 1] == '0' and s[i + 2] == '1')
        {
            return true;
        }
    }
    return false;
}

int32_t main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s))
        {
            cout << "Good" << nn;
        }
        else
        {
            cout << "Bad" << nn;
        }
    }
    return 0;
}