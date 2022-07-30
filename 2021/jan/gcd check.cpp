#include <bits/stdc++.h>
using namespace std;
#include <stdlib.h>
int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
int main()
{
    system("CLS");
    int t = 1000;
    while (t--)
    {

        int x, y;
        cin >> x >> y;
        cout << "gcd(" << x << "," << y << ") = " << gcd(x, y) << endl;
    }
}