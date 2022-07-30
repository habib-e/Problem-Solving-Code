#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d, x;
        cin >> n >> d;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        bool can = true;
        if (v[n - 1] > d)
        {
            if (v[0] + v[1] <= d)
            {
                can = true;
            }
            else
            {
                can = false;
            }
        }
        if (can)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}