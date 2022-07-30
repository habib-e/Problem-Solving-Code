#include <bits/stdc++.h>
using namespace std;
string st;
vector<int> ans;
int main()
{
    while (getline(cin, st))
    {
        int d = 0;
        for (auto i : st)
        {
            if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
            {
                ++d;
            }
        }
        ans.push_back(d);
    }
    if (ans[0] == 5 and ans[1] == 7 and ans[2] == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}