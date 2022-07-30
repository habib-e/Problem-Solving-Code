#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int n = 0;
    long long int a[n];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        long long int ele;
        cin >> ele;
        a[i] = ele;
    }
    for (int i = 1; i < n; ++i)
    {
        a[i] += a[i - 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (r < l)
            swap(l, r);
        if (l == 0)
        {
            cout << a[r] << endl;
        }
        else
        {
            cout << a[r] - a[l - 1] << endl;
        }
    }
}