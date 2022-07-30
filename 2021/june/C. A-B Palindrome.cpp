#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, i, j;
        cin >> a >> b;
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        int n = s.size();
        for (i = 0; i < n / 2; i++)
        {
            if (s[i] != '?' and s[n - i - 1] == '?')
            {
                s[n - i - 1] = s[i];
            }
            if (s[i] == '?' and s[n - i - 1] != '?')
            {
                s[i] = s[n - i - 1];
            }
        }
        for (i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                c0++;
            }
            else if (s[i] == '1')
            {
                c1++;
            }
        }
        a -= c0;
        b -= c1;
        for (i = 0; i < n / 2; i++)
        {
            if (s[i] == '?')
            {
                if (a > b)
                {
                    s[i] = '0';
                    s[n - i - 1] = '0';
                    a -= 2;
                }
                else
                {
                    s[i] = '1';
                    s[n - i - 1] = '1';
                    b -= 2;
                }
            }
        }
        // if(n&1){
        //     s[n/2]='0';
        //     a--;
        // }
        for (i = 0; i < n; i++)
        {

            if (s[i] == '?')
            {
                if (a > b)
                {
                    s[i] = '0';
                    s[n - i - 1] = '0';
                    a--;
                }
                else
                {
                    s[i] = '1';
                    s[n - i - 1] = '1';
                    b--;
                }
            }
        }
        int f = 0;
        if (a == 0 and b == 0)
        {
            for (i = 0; i < n / 2; i++)
            {
                if (s[i] != s[n - i - 1])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                cout << s << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
