#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, c = 0;
        cin >> a >> b >> n;
        while (max(a, b) <= n)
        {
            if (a > b)
                b += a;
            else
                a += b;
            c++;
        }
        cout<<c<<endl;
    }

    return 0;
}https://codeforces.com/problemset/problem/702/A