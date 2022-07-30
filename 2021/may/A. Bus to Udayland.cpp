#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    string s[1000];
    bool f = true;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
        if (f)
        {
            if (s[i][0] == 'O' and s[i][1] == 'O')
            {
                s[i][0] = '+';
                s[i][1] = '+';
                f = false;
            }
            else if(s[i][3]=='O' and s[i][4]=='O')
            {
                s[i][3] = '+';
                s[i][4] = '+';
                f = false;
            }
        }
    }
    if (f)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (i = 0; i < n; i++)
        {
            cout << s[i] << endl;
        }
    }
}
