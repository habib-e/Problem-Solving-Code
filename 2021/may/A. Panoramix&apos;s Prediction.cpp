

#include <bits/stdc++.h>
using namespace std;

void Siv(int n, int x, int y)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int ar[51];
    int i = 0, c = 0, d = 0;
    for (int p = 2; p <= n; p++)
        if (prime[p])
        {
            ar[i] = p;
            if (ar[i] == x)
            {
                c = i;
            }
            else if (ar[i] == y)
            {
                d = i;
            }
            i++;
        }
    if (prime[x] and prime[y] and (c + 1) == d)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
    }
}

int main()
{
    int a = 51, m, n;
    cin >> n >> m;
    Siv(a, n, m);
    return 0;
}