#include <bits/stdc++.h>
using namespace std;
bool isp(int x)
{
    int r = sqrt(x);
    if (r * r != x)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (isp(x))
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
