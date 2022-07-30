#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, l, r, q, a;
    cin >> t;
    while (t--)
    {
        a = l = r = q = 0;
        string s;
        cin >> s;
        a = s.size();
        if (s[0] != ')' and s[a - 1] != '(')
        {
            for (i = 0; i < a; i++)
            {
                if (s[i] == '(')
                {
                    l++;
                }
                else if (s[i] == ')')
                {
                    l--;
                }
                if (l < 0)
                {
                    break;
                }
                if (s[i] == '?')
                {
                    if (l > 0)
                    {
                        l--;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
            if (l == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
